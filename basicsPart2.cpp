#include <iostream>

using namespace std;

class Distance{
    private:
        int feet;
        int inches;
    public:
        void setData(int ft,int inch){
            feet=ft;
            inches=inch;
        }
        
        Distance add(Distance d){
            Distance ans;
            ans.feet = feet + d.feet;
            ans.inches = inches + d.inches;
            if (ans.inches >= 12){
                ans.feet += ans.inches / 12;
                ans.inches = ans.inches % 12;
            }
            return ans;
        }
        
        void showData(){
            cout << feet << "'" << " " << inches << "''" << endl;
        }
};

int main(){
    Distance d1;
    d1.setData(4, 10);
    d1.showData();
  
    Distance d2;
    d2.setData(2, 8);
    d2.showData();

    Distance d3 = d1.add(d2);
    d3.showData();
  
    return 0;
}
