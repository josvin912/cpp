#include <iostream>
#include <sstream>
using namespace std;

class Student{
  private:
  int age,standard;
  string first_name,last_name;
  public:
  void set_age(int newage){
      age=newage;
  }
  int get_age(){
      return age;
  }
  void set_standard(int newstandard){
      standard = newstandard;
  }
  int get_standard(){
      return standard;
  }
  void set_first_name(string newfirst_name){
       first_name=newfirst_name;
  }
  string get_first_name(){
      return first_name;
  }
  void set_last_name(string newlast_name){
      last_name= newlast_name;
  }
  string get_last_name(){
      return last_name;
  }
  void to_string(){
      string sage,sstd;
      stringstream ss1,ss2;
      ss1<<age;
      ss1>>sage;
      ss2<<standard;
      ss2>>sstd;
      
      cout<<sage<<","<<first_name<<","<<last_name<<","<<sstd;
  }
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}

