import json
import os

DATA_FILE = "tasks.json"

PRIORITY_LABELS = {
    "1": "high",
    "2": "medium",
    "3": "low"
}

def get_priority_label(prio):
    return PRIORITY_LABELS.get(prio, f"unknown ({prio})")

def load_tasks():
    if os.path.exists(DATA_FILE):
        with open(DATA_FILE, "r", encoding="utf-8") as file:
            return json.load(file)
    return []

def save_tasks(tasks):
    with open(DATA_FILE, "w", encoding="utf-8") as file:
        json.dump(tasks, file, ensure_ascii=False, indent=4)

def add_task(tasks):
    title = input("Task title: ")
    description = input("Description: ")
    priority = input("Priority (1 - high, 2 - medium, 3 - low): ")
    new_task = {
        "title": title,
        "description": description,
        "priority": priority,
        "status": "not done"
    }
    tasks.append(new_task)

def view_tasks(tasks):
    if not tasks:
        print("No tasks.")
        return
    for number, task in enumerate(tasks, start=1):
        print(f"{number}. Title: {task['title']}")
        print(f"   Description: {task['description']}")
        print(f"   Priority: {get_priority_label(task['priority'])}")
        print(f"   Status: {task['status']}")
        print("---")

def edit_task(tasks):
    view_tasks(tasks)
    if not tasks:
        return
    try:
        index = int(input("Number to edit: ")) - 1
        if index < 0 or index >= len(tasks):
            print("Invalid number.")
            return
        task = tasks[index]
        new_title = input(f"New title ({task['title']}): ")
        if new_title:
            task["title"] = new_title
        new_desc = input(f"New description ({task['description']}): ")
        if new_desc:
            task["description"] = new_desc
        new_prio = input(f"New priority ({get_priority_label(task['priority'])}): ")
        if new_prio:
            task["priority"] = new_prio
        new_status = input(f"New status ({task['status']}): ")
        if new_status:
            task["status"] = new_status
    except ValueError:
        print("Enter a valid number.")

def delete_task(tasks):
    view_tasks(tasks)
    if not tasks:
        return
    try:
        index = int(input("Number to delete: ")) - 1
        if 0 <= index < len(tasks):
            tasks.pop(index)
        else:
            print("Invalid number.")
    except ValueError:
        print("Enter a valid number.")

def search_task(tasks):
    search = input("Search for: ")
    found = False
    for number, task in enumerate(tasks, start=1):
        if search.lower() in task["title"].lower() or search.lower() in task["description"].lower():
            print(f"{number}. {task['title']}: {task['description']}")
            found = True
    if not found:
        print("Nothing found.")

def mark_as_done(tasks):
    view_tasks(tasks)
    if not tasks:
        return
    try:
        index = int(input("Number to mark as done: ")) - 1
        if 0 <= index < len(tasks):
            tasks[index]["status"] = "done"
        else:
            print("Invalid number.")
    except ValueError:
        print("Enter a valid number.")

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
        print("\n MewTasks Menu ")
        print("1. Add task")
        print("2. View tasks")
        print("3. Edit task")
        print("4. Delete task")
        print("5. Search tasks")
        print("6. Mark as done")
        print("7. Sort by priority")
        print("8. Exit")
        choice = input("Choice: ")
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
            print("See you in MewTasks")
            break
        else:
            print("Invalid choice. Try again!")

if __name__ == "__main__":
    main()

