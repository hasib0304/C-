#include <iostream>
#include <string>

struct Student{
    std::string name;
    float score;
};

int main(){
    int size;
    float sum=0;
    float highest = 0;
    float lowest = 100;

    std::cout<<"How many students do you want the result for: ";
    std::cin>>size;
    std::cin.ignore();

    Student students[size];

    for (int i=0;i<size;i++){
        std::cout<<"Student's name: ";
        std::getline(std::cin,students[i].name);

        do{
            std::cout<<"Student's score: ";
            std::cin>>students[i].score;
            std::cin.ignore();

            if(students[i].score<0 || students[i].score>100){
                std::cout<<"Invalid number"<<std::endl;
            }
           
        }while(students[i].score<0|| students[i].score>100);

        sum+=students[i].score;
    }
        
    for (int k=0;k<size;k++){

        if (students[k].score>=90){
            std::cout<<students[k].name<<" Score: "<<students[k].score<<" Grade: A"<<std::endl;
        }
        else if(students[k].score>=80){
            std::cout<<students[k].name<<" Score: "<<students[k].score<<" Grade: B"<<std::endl;
        }
        else if(students[k].score>=70){
            std::cout<<students[k].name<<" Score: "<<students[k].score<<" Grade: C"<<std::endl;
        }
        else if(students[k].score>=60){
            std::cout<<students[k].name<<" Score: "<<students[k].score<<" Grade: D"<<std::endl;
        }
        else{
            std::cout<<students[k].name<<" Score: "<<students[k].score<<" Grade: F"<<std::endl;
        }

        if (students[k].score > highest){
             highest = students[k].score;
        }
        if (students[k].score < lowest) {
            lowest = students[k].score;
    }
    }


    float average = sum / size;
    std::cout << "The average is: " << average << std::endl;
    std::cout << "Highest score: " << highest << std::endl;
    std::cout << "Lowest score: " << lowest << std::endl;
    
    return 0;
} // close main

 
