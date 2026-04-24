#include <iostream>

using namespace std;

class BankData{
    public:
    string mail,password,Loan_ammount,Income,Expense;
    
    BankData(){
        cout << "Enter email : "; cin >> mail; cout << endl;
        cout << "enter password : "; cin >> password ; cout << endl;
        cout << "enter Loan_ammount : "; cin >> Loan_ammount ; cout << endl;
        cout << "enter Income : "; cin >> Income ; cout << endl;
        cout << "enter Expense : "; cin >> Expense ; cout << endl;

    }
    
};
class SecureBank :virtual public BankData{
    void chek_mail(string m){
        try{
            if(((m.find("@")!=string::npos) && (m.find(".com") != strong :: npos)) == false ){
                throw invalid_argument("invalid email")
            }
        }  catch(invalid_argument e){
            cout << e.what() << endl; 
            cout << "Enter mail : ";
            cin << mail; chek_mail(mail);
        }
    }
    
    void chek_pass(){
        try{
            if()
        }
    }
    bool FP(string s){
        for(s:char c){
            if(!isalnum(c) && !isspace(c)){
                return true;
            }
          else return false;
        }
    }
    
};


int main() {

}
