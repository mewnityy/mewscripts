import json
import os

DATA_FILE = "tasks.json"

PRIORITY_LABELS = {
    "1": "высокий",
    "2": "средний",
    "3": "низкий"
}

def get_priority_label(prio):
    return PRIORITY_LABELS.get(prio, f"неизвестный ({prio})")

def load_tasks():
    if os.path.exists(DATA_FILE):
        with open(DATA_FILE, "r", encoding="utf-8") as file:
            return json.load(file)
    return []

def save_tasks(tasks):
    with open(DATA_FILE, "w", encoding="utf-8") as file:
        json.dump(tasks, file, ensure_ascii=False, indent=4)

def add_task(tasks):
    title = input("Название задачи: ")
    description = input("Описание: ")
    priority = input("Приоритет (1 - высокий, 2 - средний, 3 - низкий): ")
    new_task = {
        "title": title,
        "description": description,
        "priority": priority,
        "status": "не выполнено"
    }
    tasks.append(new_task)

def view_tasks(tasks):
    if not tasks:
        print("Нет задач.")
        return
    for number, task in enumerate(tasks, start=1):
        print(f"{number}. Название: {task['title']}")
        print(f"   Описание: {task['description']}")
        print(f"   Приоритет: {get_priority_label(task['priority'])}")
        print(f"   Статус: {task['status']}")
        print("---")

def edit_task(tasks):
    view_tasks(tasks)
    if not tasks:
        return
    try:
        index = int(input("Номер для редактирования: ")) - 1
        if index < 0 or index >= len(tasks):
            print("Плохой номер.")
            return
        task = tasks[index]
        new_title = input(f"Новое название ({task['title']}): ")
        if new_title:
            task["title"] = new_title
        new_desc = input(f"Новое описание ({task['description']}): ")
        if new_desc:
            task["description"] = new_desc
        new_prio = input(f"Новый приоритет ({get_priority_label(task['priority'])}): ")
        if new_prio:
            task["priority"] = new_prio
        new_status = input(f"Новый статус ({task['status']}): ")
        if new_status:
            task["status"] = new_status
    except ValueError:
        print("Введите корректный номер.")

def delete_task(tasks):
    view_tasks(tasks)
    if not tasks:
        return
    try:
        index = int(input("Номер для удаления: ")) - 1
        if 0 <= index < len(tasks):
            tasks.pop(index)
        else:
            print("Плохой номер.")
    except ValueError:
        print("Введите корректный номер.")

def search_task(tasks):
    search = input("Что искать: ")
    found = False
    for number, task in enumerate(tasks, start=1):
        if search.lower() in task["title"].lower() or search.lower() in task["description"].lower():
            print(f"{number}. {task['title']}: {task['description']}")
            found = True
    if not found:
        print("Ничего нет.")

def mark_as_done(tasks):
    view_tasks(tasks)
    if not tasks:
        return
    try:
        index = int(input("Номер для отметки: ")) - 1
        if 0 <= index < len(tasks):
            tasks[index]["status"] = "выполнено"
        else:
            print("Плохой номер.")
    except ValueError:
        print("Введите корректный номер.")

# сортировка задач
def sort_tasks_by_priority(tasks):
    high = []
    medium = []
    low = []
    other = []
    for task in tasks:
        if task["priority"] == "1":
            high.append(task)
        elif task["priority"] == "2":
            medium.append(task)
        elif task["priority"] == "3":
            low.append(task)
        else:
            other.append(task)
    sorted_tasks = high + medium + low + other
    for number, task in enumerate(sorted_tasks, start=1):
        print(f"{number}. {task['title']} - {get_priority_label(task['priority'])}")

def main():
    tasks = load_tasks()
    while True:
        print("\n MewTasks Меню ")
        print("1. Добавить задачу")
        print("2. Просмотреть задачи")
        print("3. Редактировать задачу")
        print("4. Удалить задачу")
        print("5. Поиск задач")
        print("6. Отметить как выполненную")
        print("7. Сортировать по приоритету")
        print("8. Выход")
        choice = input("Выбор: ")
        if choice == "1":
            add_task(tasks)
        elif choice == "2":
            view_tasks(tasks)
        elif choice == "3":
            edit_task(tasks)
        elif choice == "4":
            delete_task(tasks)
        elif choice == "5":
            search_task(tasks)
        elif choice == "6":
            mark_as_done(tasks)
        elif choice == "7":
            sort_tasks_by_priority(tasks)
        elif choice == "8":
            save_tasks(tasks)
            print("До встречи в MewTasks")
            break
        else:
            print("Неверный выбор. Попробуйте снова!")

if __name__ == "__main__":
    main()
