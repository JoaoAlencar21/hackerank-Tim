#include<iostream>
#include<vector>

class Student{
    private:
        std::vector<int>scores;
    public:
        void input_grades(std::vector<int> input){
            scores=input;
        }
        int total_score(){
            int sum=0;
            int size = scores.size();
            for(int i=0;i<scores.size();i++){
                sum+=scores[i];
            }
            return sum;
        }
};

int main(){
    std::vector<Student> alunos;
    int quantidade;
    std::cin>>quantidade;

    for(int i=0;i<quantidade;i++){
        Student aluno_temp;
        std::vector<int> score_temp;
        for(int j=0;j<5;j++){
            int nota;
            std::cin>>nota;
            score_temp.push_back(nota);
        }
        aluno_temp.input_grades(score_temp);
        alunos.push_back(aluno_temp);
    }
    
    // calculate kristen's score
    int kristen_score = alunos[0].total_score();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < quantidade; i++){
        int total = alunos[i].total_score();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    std::cout << count;

    return 0;
}