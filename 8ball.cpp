#include <iostream> 
#include <cstdlib>

int main(){
srand(time(NULL));
int answer = std::rand() % 10;


std::cout << "Magic 8-Ball!\n";
std::cout << "Please enter your question\n\n";
std::string userquestion;
getline (std::cin, userquestion);    
std::cout << answer ; 

if (answer == 0) {
 std::cout << userquestion << "\n";
  std::cout << "It is certain.\n\n";
}
else if (answer == 1){
    std::cout << "\n" << userquestion << "\n";
  std::cout << "It is decidedly so.\n\n";
}
else if (answer == 2){
    std::cout << "\n" << userquestion << "\n";
  std::cout << "Without a doubt!\n\n"; 
}
else if (answer == 3){
    std::cout << "\n" << userquestion << "\n";
  std::cout << "It's likely, but not certain\n\n";
}
else if (answer == 4){
    std::cout << "\n" << userquestion << "\n";
  std::cout << "You can't rely on it\n\n";
}
else if (answer == 5){
    std::cout << "\n" << userquestion << "\n";
  std::cout << "As I can see it, yes\n\n"; 
}
else if (answer == 6){
    std::cout << "\n" << userquestion << "\n";
  std::cout << "Fairly likely!\n\n";
}
else if (answer == 7){
    std::cout << "\n" << userquestion << "\n";
  std::cout << "out look is good!\n\n"; 
}
else if (answer == 8){
    std::cout << "\n" << userquestion << "\n";
  std::cout << "The ball is tired, please try again.\n\n";
}
else if (answer == 9){
    std::cout << "\n" << userquestion << "\n";
  std::cout << "Ball says no\n\n";
}
else {
    std::cout << "\n" << userquestion << "\n";
  std::cout << "Very doubtful\n\n";
}
system("pause");
}