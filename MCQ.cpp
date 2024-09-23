#include<iostream>
using namespace std;
int playquiz(){
    char c;
    char option;
    int score=0;
    cout<<"-----welcome to the quiz----"<<endl;
    cout<<"---please follow the instruction---"<<endl;
    cout<<"step 1:quiz contains total 10 questions"<<endl;
    cout<<"step 2:each question conatins 1 marks"<<endl;
    cout<<"step 3:please press 's' to start the quiz"<<endl;
    cout<<"step 4:if you score >=6 ,you will pass the quiz"<<endl;
    cin>>c;
    if(c=='s' || c=='S'){
        cout<<"Q.1 who is the father of c langauge?"<<endl;
        cout<<"(a)bjarne stroustrup"<<endl;
        cout<<"(b)Dennis ritchie"<<endl;
        cout<<"(c)Games A gosling"<<endl;
        cout<<"(d)Dr.E.F.codd"<<endl;
        cin>>option;
        if(option=='b'|| option=='B'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        cout<<"Q.2 In which year c language was developed?"<<endl;
        cout<<"(a)1989"<<endl;
        cout<<"(b)1972"<<endl;
        cout<<"(c)1991"<<endl;
        cout<<"(d)1995"<<endl;
        cin>>option;
        if(option=='b'|| option=='B'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        cout<<"Q.3 which of the following will not return a value?"<<endl;
        cout<<"(a)void"<<endl;
        cout<<"(b)int"<<endl;
        cout<<"(c)null"<<endl;
        cout<<"(d)char"<<endl;
        cin>>option;
        if(option=='a'|| option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        cout<<"Q.4 which of the following is logical NOT operator ?"<<endl;
        cout<<"(a)||"<<endl;
        cout<<"(b)&&"<<endl;
        cout<<"(c)!"<<endl;
        cout<<"(d)+"<<endl;
        cin>>option;
        if(option=='c'|| option=='C'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        cout<<"Q.5 Is it possible to run program without main()?"<<endl;
        cout<<"(a)yes"<<endl;
        cout<<"(b)No"<<endl;
        cout<<"(c)error"<<endl;
        cout<<"(d)cant say"<<endl;
        cin>>option;
        if(option=='a'|| option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        cout<<"Q.6 In C we use for input/output?"<<endl;
        cout<<"(a)cin & cout"<<endl;
        cout<<"(b)scanf & printf"<<endl;
        cout<<"(c)input & ouput"<<endl;
        cout<<"(d)None"<<endl;
        cin>>option;
        if(option=='b'|| option=='B'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        cout<<"Q.7 break statement is use for?"<<endl;
        cout<<"(a)Quit a program"<<endl;
        cout<<"(b)Quit the current itration"<<endl;
        cout<<"(c)both a & b"<<endl;
        cout<<"(d)None"<<endl;
        cin>>option;
        if(option=='b'|| option=='B'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        cout<<"Q.8 how many keywords in c?"<<endl;
        cout<<"(a)55"<<endl;
        cout<<"(b)78"<<endl;
        cout<<"(c)32"<<endl;
        cout<<"(d)144"<<endl;
        cin>>option;
        if(option=='c'|| option=='C'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        cout<<"Q.9 which of the following function is user defined?"<<endl;
        cout<<"(a)printf"<<endl;
        cout<<"(b)scanf"<<endl;
        cout<<"(c)main"<<endl;
        cout<<"(d)none"<<endl;
        cin>>option;
        if(option=='c'|| option=='C'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        cout<<"Q.10 which type of language is c?"<<endl;
        cout<<"(a)procedural oriented programming"<<endl;
        cout<<"(b)object oriented programming"<<endl;
        cout<<"(c)semi-object oriented programming"<<endl;
        cout<<"(d)None"<<endl;
        cin>>option;
        if(option=='a'|| option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
    }
    else{
        cout<<"you have entered wrong value,please enter s"<<endl;
    }

    return score;
}
    int main (){
        int finalresult=0;
        int playquiz(void);
        finalresult=playquiz();
        cout<<"your total score is:"<<finalresult<<endl;
        if(finalresult>=6){
            cout<<"you are pass"<<endl;
        }
        else{
            cout<<"you are fail"<<endl;
        }    
        }

