#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Quiz
{
    string Question;
    vector<string> Options;
    int Correctans;
};

int main()
{
    vector<Quiz> quiz = {
        {"What is 2 + 2?", {"1", "2", "4", "5"}, 2},
        {"Capital of India?", {"Mumbai", "Delhi", "Chennai", "Kolkata"}, 1},
        {"C++ is a ___ language?", {"Markup", "Programming", "Scripting", "Design"}, 1}
    };

    int correct = 0,answer;

    for(int i=0;i<quiz.size();i++){
        cout<<"\nQ"<<i+1<<" : "<<quiz[i].Question<<endl;
        for(int j=0;j<quiz[i].Options.size();j++){
            cout<<j+1<<". "<<quiz[i].Options[j]<<endl;
        }

        cout<<"Answer the Correct Answer : ";
        cin>>answer;

        if(quiz[i].Correctans==answer-1){
            correct++;
            cout<<"Correct"<<endl;
        }else{
            cout<<"Wrong"<<endl;
        }
    }

    cout<<"Total Correct Answer : "<<correct<<endl;

    return 0;
}