#include <bits/stdc++.h>
using namespace std;

class BankData{
    public:
    string mail,password;
    int Loan_ammount,Income,Expense;
    
    virtual void data_input(){
        cout << "Enter email : "; cin >> mail; cout << endl;
        cout << "enter password : "; cin >> password ; cout << endl;
        cout << "enter Loan_ammount : "; cin >> Loan_ammount ; cout << endl;
        cout << "enter Income : "; cin >> Income ; cout << endl;
        cout << "enter Expense : "; cin >> Expense ; cout << endl;

    }
    
};
class SecureBank :virtual public BankData{
    public:
    
    bool chekmail(string m){
    if((m.find("@")!=string::npos) && (m.find(".com") != string :: npos)){
                return false;
            }
            else return true;
}
    void chek_mail(){
        
           while(true){
                try{
                if(chekmail(mail)){
                    throw invalid_argument("invalid email");
                }
                cout << "valid email : " << mail << endl;break;
    
                }  catch(invalid_argument e){
                    cout << e.what() << endl; 
                    
                }
                cout << "Enter mail : ";
                cin >> mail;
           }
        }
    
    
    void chek_pass(){
        while(true){
            try{
            if(!FP(password)){
                throw  invalid_argument("invalid password ! \n");
            }
            cout << "valid password : " << password << endl;break;
        }catch(invalid_argument e){
            cout << e.what() << endl;
            cout << "Enter new password : " ; cin >> password ;
        }
        }
    }
    bool FP(string s){
    bool flag1 = false,flag2=false,flag3=false;
        for(char c : s ){
            if(!isalnum(c) && !isspace(c)){
                flag1 = true;
                break;
            }
            // cout << "This is working!!";
            // return false;
        }
        for (char c: s){
        if(c > 'A' && c <'Z' ){
            flag2 = true;
            break;
        }
        // return false;
    }
    for(char  c : s){
            if(c>'a' && c< 'z'){
                flag3 = true;
                break;
            }
            // return false;
        }
        return (flag1&&flag2&&flag3);
        
}
void  chek_loan(){
        while(true){
            try{
                if(Loan_ammount<0){
                    throw invalid_argument("the loan is negetive");
                }
                cout << "valid loan number : "<< Loan_ammount<< endl;break;
            }
            
            catch(const invalid_argument e){
                cout << e.what() << endl << "enter a new loan numjber : " ;
                cin >> Loan_ammount; 
            }
        }
    }
void chek_income(){
        while(true){
            try{
                if(Income == Expense){
                    throw invalid_argument("you need to earn more !!");
                }
                cout << "you earn enough to get loan " << endl
                     << "THE risk is : " << (Loan_ammount/ (Income-Expense));
                
            break;
            }
            
            catch (const invalid_argument e){
                cout << e.what() << endl << "earn more ? ";
                cin >> Income;
                
            }
            
        }
    }
    
};


int main() {
    SecureBank s1;
    s1.data_input();
    s1.chek_mail();
    s1.chek_pass();
    s1.chek_loan();
    s1.chek_income();
    return 0;
}
