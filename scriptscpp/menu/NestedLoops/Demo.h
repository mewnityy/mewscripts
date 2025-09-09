using namespace std;

void pifagorDemo() {
    for(int i = 1; i<= 9; i++) {
        for(int j = 1; j <= 9; j++){
            cout << setw(4) << i * j;
        }
        cout << "\n";
    }
}
void quadraticTable() {
    int x;
   for(int i = 1; i<= 9; i++) {
        for(int j = 0; j <= 9; j++){
            x = i * 10 + j * 1;
            cout << setw(6) << x * x;
        }
        cout << "\n";
    }
}
void triangleTable() {
    // 1
    for(int i = 1; i < 10; i++) {
        for(int j = 1; j <= i; j++) { 
            cout << " " << 1;
        }
        cout << "\n";
    }
    cout << "\n";
    // 2
    for(int i = 9; i >= 1; i--) {
        for(int j = 1; j <= i; j++) { 
            cout << " " << 1;
        }
        cout << "\n";
    }
    
    cout << "\n";
}