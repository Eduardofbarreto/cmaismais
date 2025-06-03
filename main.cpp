#include<iostream>
#include<vector>
#include<string>
#include<limits>

int main(){
    std::vector<std::string>tasks;
    std::string task_input;
    char continue_adding_choice;

    std::cout<<"--- Gerenciador de Tarefas Simples ---\n";

    do{
        std::cout<<"Digite uma nova tarefa: "<<std::endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::getline(std::cin, task_input);

        if(!task_input.empty()){
            tasks.push_back(task_input);
            std::cout<<"Tarefa salva! \""<<task_input<<"\"\n";
        }else{
            std::cout<<"A tarefa não pode ser vazia. Por favor, digite algo.\n";
        }

        std::cout<<"Deseja adicionar outra tarefa (S/N)"<<std::endl;
        std::cin>>continue_adding_choice;
        continue_adding_choice = toupper(continue_adding_choice);
    }while(continue_adding_choice == 'S');
    std::cout<<"\n--- Suas tarefas salvas ---\n";
    if(tasks.empty()){
        std::cout<<"Nenhuma tarefa foi adicionada!\n"<<std::endl;
    }else{
        for(size_t i = 0; i < tasks.size(); i++){
            std::cout<<(i + 1)<<". "<<tasks[i]<<"\n";
        }
    }
    std::cout<<"\nObrigado por usar o Gerenciador de Tarefas!\n";

    return 0;
}