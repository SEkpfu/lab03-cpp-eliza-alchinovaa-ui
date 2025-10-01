//#include <iostream>
//using namespace std;
//
//int main() {
//    setlocale(0, "");
//    string res, x1, x2;
//    int n;
//
//    cout << "¬ведите n:" << endl; cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        if (i % 2 == 1) {x1 += "o ";
//            x2 += "* ";
//        }
//        else {x1 += "* ";
//            x2 += "o ";
//        }
//    }
//    x1 += "\n";
//    x2 += "\n";
//
//    for (int i = 0; i < n; i++) {
//        if (i % 2 == 0) {
//            res += x1;
//        }
//        else {
//            res += x2;
//        }
//    }
//    cout << res;
//}