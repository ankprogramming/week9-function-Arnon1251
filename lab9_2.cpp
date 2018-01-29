#include <iostream>

using namespace std;
 float cArea (float r ) {
    float Area ;
    Area = 3.1416*r*r;
    return Area;
    }
int main() {
    float r,cmd;
    do {
        cin >> cmd;
        if (cmd == 1 ) {
            cin >> r;
            cout << cArea(r) << endl;

        } else { break; }} while(1);
        return 0;
    }

    /* เขียนโปรแกรมรับค่ารัศมีวงกลมจากคีย์บอร์ด และหาพื้นที่ของวงกลมเป็นทศนิยม 4 ตำแหน่ง
    โดยกำหนดให้โปรแกรมหาพื้นที่ของวงกลม จนกว่าผู้ใช้งานต้องการออกจากการทำงานของโปรแกรม
    และกำหนดให้แบ่งการทำงานเป็นโปรแกรมย่อยอย่างน้อย 1 ฟังก์ชัน
    */



