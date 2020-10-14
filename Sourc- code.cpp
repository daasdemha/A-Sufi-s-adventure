#include <iostream>
#include <stdlib.h> 
#include <bits/stdc++.h>
#include <string>
#include <chrono>
#include <unistd.h>
#include <termios.h>
#include <thread>
#include <vector>
#include <algorithm>


using namespace std;
/*Most the code ive learnt is from:
https://www.mikedane.com/programming-languages/c++/
https://www.linkedin.com/learning/paths/become-a-c-plus-plus-developer?u=2039756
 */

/* to save user name i got the idea from https://stackoverflow.com/questions/11069689/c-using-square-brackets-with-pointer-to-instance and http://www.functionx.com/cpp/Lesson14.htm */
const string const_name = []() -> string {
cout << "Hello.\n\nplease enter your username. The first three elements of the name should be characters. The name should at least have three letters.\n\nplease enter you name: ";
string name;
    do {
        getline(cin, name);
        if (!isalpha(name[0]) || !isalpha(name[1]) ||!isalpha(name[2]) || isspace(name[0]) || isspace(name[1]) || isspace(name[2]) || isspace(name[3]) || name.length() < 3) {
            cout << "\nwrong that is not a valid name the first three elements of the name should be letters. The name should at least have three characters.\n\nPlease enter your username: ";
            } else {
              return name;
        }
    } while(!isalpha(name[0]) || !isalpha(name[1]) ||!isalpha(name[2]) || isspace(name[0]) || isspace(name[1]) || isspace(name[2]) || isspace(name[3]) || name.length() < 3);
    return name;
}();
/* i got the idea from the site below and made changes accourding to my needds
https://www.geeksforgeeks.org/how-to-find-index-of-a-given-element-in-a-vector-in-cpp/ */
int getIndex(vector<string> v, string K) 
{
    auto it = find(v.begin(), 
                   v.end(), K); 
  
 
    if (it != v.end()) { 

        int index = distance(v.begin(), 
                             it); 
        return  index;
    } 
    else { 

        cout << "-1" << endl; 
    } 
    return 0;
} 

//function descriptions will be given above the function code below the main function.
void inner_mad();
void mad();
char getch();
string string_to_char(string);
char slowstring(string, int);
int timer(int);
void dream();
void further_dialogs();
void door();
void go_to_location(int);
void house();
void carDrive();
void thefactory();
void office();
void mr_abdul();
void thelab();
void thepostoffice();
void thebazar();

// for the most part i did this myself my friend violeta malinkova however sent me this vidoe https://www.youtube.com/watch?v=f3FVU-iwNuA to help me understand static variables better.
struct soul{

  string name;
  int hpc(int change) {
    static int healthchange;
    healthchange = healthchange + change ;
    return healthchange;
}
  int shc(int change) {
    static int spiritualhealth;
    spiritualhealth = spiritualhealth + change ;
    return spiritualhealth;
}
  soul(){
    name = const_name;
  }

};
//this is the main function but mostly the house function is used.
int main() {
  soul s1;
  s1.hpc(100);
  dream();
  further_dialogs();
  house();

  return 0;
}

// i got the below function from https://stackoverflow.com/questions/30250934/how-to-end-c-code
void inner_mad()
{
    throw std::exception();
}
// i got the below function from https://stackoverflow.com/questions/30250934/how-to-end-c-code
void mad()
{
    auto ptr = std::make_unique<int>();
    inner_mad();
}
/*The function below takes character input.

The code for the getch function is not my own the original can be found at:

https://Dungeon-Crawler-6.spqr.repl.run

*/
char getch()
{
   char buf = 0;
   struct termios old = {0};
   fflush(stdout);
   if(tcgetattr(0, &old) < 0)
       perror("tcsetattr()");
   old.c_lflag &= ~ICANON;
   old.c_lflag &= ~ECHO;
   old.c_cc[VMIN] = 1;
   old.c_cc[VTIME] = 0;
   if(tcsetattr(0, TCSANOW, &old) < 0)
       perror("tcsetattr ICANON");
   if(read(0, &buf, 1) < 0)
       perror("read()");
   old.c_lflag |= ICANON;
   old.c_lflag |= ECHO;
   if(tcsetattr(0, TCSADRAIN, &old) < 0)
       perror("tcsetattr ~ICANON");
   return buf;
}
//the function to convert characters to strings.
string string_to_char(string str){
  int n = str.length();
  char c[n + 1];
  strcpy(c, str.c_str());
  for(int i = 0; i < n; i++)
  cout << c[i];
  return c;
  
}
// function to prints strings over time delay. 
char slowstring(string str, int m) {

    for (char c : str) {
        this_thread::sleep_for(std::chrono::milliseconds(m));
        std::cout << c << std::flush;
    }
    return 0;

}
// timer function
int timer(int m) {
  
  this_thread::sleep_for(std::chrono::seconds(m));
  std::cout << "" << std::flush;
  return 0;
}
// just strings
void dream() {
  
    timer(3);
    cout << "\nYou are standing in a desert with your back against a stack of hay. You are looking up towards the sky. A man walks infront of you.\n\n";
    timer(5);
    cout << "He is dressed in full black shalwar kamiz (triditional pakistani clothing). He has a tall figure with a dark brown complection. His hair is black with a hinge of orange and its reaching to his shoulders.He is carrying a Long stick and is walking behind a heard of sheep.\n\n";
    timer(5);
    cout << "The shepard walks towards you. You stand up with a trembling sensation throughout your whole body. He comes and sits next to you. \n\n";
    timer(3);
    cout << "The shepard says : How would you know what is enlightment.some one has tricked you brother. Nor have you ruled for some days, Nor have you enjoyed the plesures of life. go away. what would a man you eats 36 dishes do with faquree (sainthood/sufism). This path is difficult and full of struggles. leave it, let go and fill a world of arrogace. You will take the first step in faquree. when you will control anger. You will turn pride, arrogance and vanity into ash. You will put your authority on the line. Throw away the crown of your ego. then think about jog(sufiism/mysticisim). \n\n";
    timer(10);
    cout << "The shepard swings his sticks and hits the ground in a consistant motion. You feel that beating sensation in your whole body, your whole body is trembling.\n\nYou wake up.\n\n";
    timer(5);
    cout << "You have a feeling of a great fulfilment like there is something long lost in you that has been refound but with it was a feeling of great sadness, the sadness of not being kept apart from said thing and not having it compleately.\n\n";
    timer(5);
    cout << "You started reading a old sufi book that you had long purchased but had never read. As you got into the story your alarm went off so you got off the bed still a bit mesmirised. You got ready. Went out to your car the driver opened the door for you went off to work.\n\n";
    timer(5);
    cout <<  slowstring("Press the enter key to continue.\n\n", 100);
    string a;
    getline(cin, a);

}
// further talks with a bit of if statements and a do while loop.
void further_dialogs(){
  cout << "secretary: Hello welcome to the factory.\nsir please go inside MR Abdul is waiting for you.\n";
  door();
  cout << "\nMR Abdul: Hello " << const_name << " my friend it has been far too long. How have you been?\n\n";
  cout << "Your response\n\n1)Ive been good my friend.\n2)Ive seen better days.\n\n response: ";
  char response;
  

 
  do {
      response = getch();
      cout << response;
      timer(1);



       if (response == '1') {
          cout << "\nThats good to hear. " << const_name << ". ";
          timer(2);
          break;
          }
        else if (response == '2') {
          cout << "\nYeah i hear you age is really catching up to us isn't it. ";
          timer(2);
          break;
            }
        else {
          cout << "\n\nWrong responce try again 1 or 2: ";

          }
          }while ((response != '1') || (response != '2'));

    cout << const_name << " i have a favour to ask you. well lets save that for another day as i have to go now. sorry i have been waiting a while.\n\n";

    cout << "You work a full day in the office and then go home\n\n";

}
//simple door using if statemnts and a do while loop
void door() {

    slowstring("\nType ( open ) to open the door: ",100);

    string nob;
    do {
        getline(cin, nob);
        std::transform(nob.begin(), nob.end(), nob.begin(),
    [](unsigned char c){ return std::tolower(c); });
    
    if (nob == "open" ) {
            cout << "\nYou open the door.\nYou see MR Abdul standing beside your desk.\n\n";
            break;
        }
        else {
            cout << "\nWrong response type ( open ) to open the door: ";
        }
    } while (nob != "open");
    timer(5);
}
// switch statements while loops and recursion
void house() {
  soul s1;
  cout << "\n\nPlayer name: ";
  cout << s1.name;
  cout << "\nPlayer health: ";
  cout << s1.hpc(0);
  cout << "\nPlayer spiritual health: ";
  cout << s1.shc(0);
  cout << endl;
  cout << endl;

    cout << "Welcome to the house. Which location would you like to go to?\n\n1) The factory\n2) The lab\n3) The post office \n4) The bazar  \n5) Go for a drive.\n6) Quit game\n";
    cout << "Please select a location : ";
    int location_adress;
    string location_adress_str;
    string location_name;
  do{
    location_adress_str = getch();
    cout << location_adress_str;
    timer(1);
   if (location_adress_str == "1" || location_adress_str == "2" || location_adress_str == "3" || location_adress_str == "4" || location_adress_str == "5" || location_adress_str == "6"){
    location_adress = std::stoi(location_adress_str);
    
    switch (location_adress) {
    case 1:
        location_name = "The factory";
        cout << "\nGoing to the factory.";
        thefactory();
        break;
    case 2:
        location_name = "The lab";
        cout << "\nGoing to the Lab.";
        thelab();
        break;
    case 3:
        location_name = "The post office";
        cout << "\nGoing to the post office.";
        thepostoffice();
        break;
    case 4:
        location_name = "The bazar";
        cout << "Going to the bazar.";
        thebazar();
        break;
    case 5:
    cout << "You open your car door. Time to drive.";
    carDrive();
    cout << "\n\nEnding Game bye.\n\n\n\n";
    mad();
    break;
    case 6:
    cout << "\n\nEnding Game bye.\n\n\n\n\n\n\n\n";
    mad();
    }
    }else{
      cout << "\n\nThat is not a option. Enter a number from 1 to 6: ";
    }
    }while (location_adress_str != "1" || location_adress_str != "2" || location_adress_str != "3" || location_adress_str != "4" || location_adress_str != "5" || location_adress_str != "5" || location_adress_str != "6");
}

// if statements recursions
void thefactory() {
    cout << "\n\nwelcome to the factory.\n\n";
    cout << "what would you like to do?\n1) Sit in your office. \n2) Go to Mr Abdul.\n\n";
        cout << "Please select a location : ";
    char Action;
    do {
      Action = getch();
      cout << Action;
      timer(1);
      if (Action == '1') {
        office();
        break;
        }
      else if (Action == '2') {
        mr_abdul();
        break;
        }
        else {
        cout << "\n\nThat is not a option. Enter a number from 1 to 4: ";
        } }while (Action != '1' || Action != '2' || Action != '3');
}


// if staTEMENTS RECURSIONS
void office(){
static int n = 0;
  if(n == 0){
      cout << "\n\nyou are sitting in your office in your chair. you hear a knocking at the door. knock knock knock. You hear a womans voice she says May i come in ?  \n\n";
     char response1;
     char response2;
    
    cout << "1) Come in.\n2) Im busy please come later.\n";

    do {
        response1 = getch();
        cout <<"response1";
        timer(1);
        if (response1 == '1') {
            cout << "\nThe woman says thankyou. she opens the door and enters the room.";
            break;

        }
        else if (response1 == '2') {
            cout << "\nPlease its really urgent i really need your help.\n\n1) ok come in. 2) what is it.\n\n";
            cout << "\nplease 1 or 2: ";


            do {

                response2 = getch();
                cout << response2;
                timer(1);
                if (response2 == '1') {
                    cout << "\nThe woman says thankyou. she opens the door and enters the room. The woman tells you she is need of a job.\n\nYou give her the job.";
                    goto label;
                    break;

                }
                else if (response2 == '2') {
                    cout << "\nIm really need of a job can i please talk to you.\n\nYou respond ok now come in.\n\nThe woman says thankyou. she opens the door and enters the room.\n\nYou give her the job.";
                    goto label;
                    break;

                }
                else {
                    cout << "\nplease 1 or 2: ";
                }
            } while ((response2 != '1') || (response2 != '2'));


        }
        else {
            cout << "\nPlease enter 1 or 2: ";
            
        }
    } while ((response1 != '1') || (response1 != '2'));

label:
    cout << "";
    soul s1;
    s1.shc(10);
    n = n + 1;
    timer(3);
    house();

  }else{
    cout << "\n\nYou sit at your desk do the office work and wait as the time passes by.\n";
    timer(3);
    house();
  }

}
//if statements recursions
void mr_abdul(){
  static int n = 0;
  if(n == 0){
cout << "\nYou enter Mr Abdul's office. ";
cout << const_name << ": how have you been my friend? You asked me there was something you needed of me?\n\n";
timer(2);
cout << "Mr Abdul: yes my friend im all to well and ive been waiting for you a while come come sit down we have much to discuss.\n\n"; 
timer(2);
cout<< const_name << ": Any thing just ask my friend.\n\n";
timer(1);
cout << "Mr Abdul: " << const_name;
cout << " you know ive been planing on taking over the ABC taxtile firm well i have come to an understaning with the people at ABC.\n\n";
timer(3);
cout << const_name << ": Thats very good news abdul. Thats very good to hear. congratulations man.\n\n";
timer(2);
cout <<"Mr Abdul: Yeah thanks my friend ive really been fortunate in that regard. " << const_name << " could i please name the company on your name? im dying i dont have much time to live. i dont have any children that will look after the buisness for me i would really appriate it if youd just sighn the transfer papers for me.\n\n";
timer(3);
cout << "ring ring ring\n\n";
cout << const_name << ": Hello yeah. ok. ok.\n" << const_name <<": sorry Abdul i have to go ill try coming back soon.";
soul s1;
s1.shc(10);

n = n + 1;
timer(3);
house();
  }else{
    cout << "\nyou enter Mr Abduls work sapce. His secretary is sitting on the left side. His office is right infront of you.\n\nwhat would you like to do 1) Go to sectary 2) Go in Mr Abduls office.\n\nPlease enter your choice: ";

    char choice;
    do{
    choice = getch();
    cout << choice;
    timer(1);
    if(choice == '1'){
    

    cout << "\n\n You go to the sectery and ask.\n\n";
    cout << const_name << ": Hello is Mr Abdul here?";
    cout << "secretary: im sorry mr abdul is not here at the moment hes gone xyz place. would you like to leave a message?";
    cout << const_name << ": no thank you i will be going thats it. Thank you.\n\nYou go back home.";

    house();
    }else if(choice == '2'){
    cout << "\n\nYou enter Mr Abduls office hes not there. You go to the sectery and ask.\n\n";
    cout << const_name << ": Hello is Mr Abdul here?";
    cout << "secretary: im sorry mr abdul is not here at the moment hes gone xyz place. would you like to leave a message?";
    cout << const_name << ": no thank you i will be going thats it. Thank you.\n\nYou go back home."; 
    house();
    
    }else{
      cout << "\n\nplease choose from option 1 and 2: ";
    }
    }while(choice != '1' || choice != '2');
  }
}

void thelab(){
  static int n = 0;
  if(n == 0){
  cout << "\n\nYou enter the lab. Everyone gets up to greet you.\n\nAlisa: Hello sir How have you been?\n\n";
  timer(1);
  cout << const_name << ": ive been good Alisa and you?\n\n" << "Alisa: Ive been good thankyou. sir what brings you here today?\n\n" << const_name << ": im here just to check up on you guys. speaking of which where is Amir i dont see him anywhere here?\n\nAlisa: hes been only doing ibadah (prayer) he doesnt work as often and he doesnt study much either. He's probably in the prayer room.\n\n" << const_name << ": i have to go now ill talk to him next time i come around.\n\n";
  timer(3);
   n++;
   house();
  }else if (n == 1){
    cout << "\n\nYou enter the lab.\n\n" << "Amir: Hello sir i heard you were looking for me?\n\n"<< const_name << ": Yes Amir ive heard you dont work much or study. is that true?" << "Amir: yes sir it doesn't matter does it if i work or study. Nothing matters doesn't Allah come first?\n\n";
    char choice;
    cout << "\n\nPlease select you responce. \n1) Amir isnt work a form of ibadah?\n2) Amir please work now and pray on your breaks. \n3) Its good that you are praying.\n\n";
    do{
    choice = getch();
    cout<< choice;
    
    if (choice == '1'){
      cout << "\n\nAmir: how so sir?";
      cout << "\n\n" << const_name << ": Amir when you work hard on something with your full effort then its is halal to you (premmisible). so if you work fully hard on your work it will be a better ibadah to you then ibadah itself. ";
      timer(2);
      n++;
    house();
    }else if (choice == 2){
      cout << "\n\nAmir: ok sir ill try to do that.";
      n = 5;
      house();
    }else if (choice == 3){
      cout << "\n\nAmir: thankyou sir i knew i was doing the right thing ";
      n = 3;
    house();
    }else{
      cout << "\n\nWrong choice please enter number 1, 2 or 3: ";
    }
    }while(choice != '1' || choice != '2' || choice != '3' );

    
  }else if (n == 2){
  cout << "\n\nYou enter the lab."; 
  cout << "\n\n" << const_name << ": you guys really did a good job i saw the report im really proud of you guys.\n\nSalim: thankyou sir but i was mostly Amir. he's been working really hard these days\n\n" << const_name <<": thats really good to hear speaking of which where is he?\n\nHassan: sir hes gone for his exams he's been working really hard and he did ask for a leave in advance.\n\n" << const_name << ": thats wounder full news give him my salam (blessings).\n\nYou go back home";
  

  n = 4;
  house();
  }else if (n == 3){
   cout << "\n\nYou walk in to the the lab.\n\n" << const_name << ": Guys i dont see amir anywhere would you know where he is? \n\n Huzaifa: sir Amir hasn't been coming to work recently\n\nMuna: i saw Amir a few days ago he was sitting on the streets in dirty old clothes just doing zikr\n\n";
   char choice1;
   cout << "\n\n your response \n1) Thats really good he is devoted to his prayer. \n2) Thats sad to hear i will go talk to him.";
   do{ 
      choice1 = getch();
      cout << choice1;
      if(choice1 == '1'){
        n++;
        cout << "You go home";
        house();
      }else if (choice1 == '2'){
        cout << "you go to the bazar abcd and see Amir there hes sitting on the ground his clothes are covered in dirt and hes in a trance\n\n" << const_name << ": Amir what are you doing here? why dont you come to work?\n\nAmir: sir as you said ibadah is every thing then i will sit here and perform zikr and that is enough\n\n" << const_name << ": Amir this is not what i meant ibadah is good but hard work is also ibadah. Amir and working hard is also the sunnah(tridition) of the prophets(Moses, Jesus, Muhammed e.t.c)\n\nAmir: sir you might be right but this is the path ive choosen to follow.\n\nYou say your goodbyes to Amir and head back home.";
        n++;
        house();
      }

   }while(choice1 != '1' || choice1 != '2');

    n++;
  }else if(n == 4){
    cout <<"\n\nYou are on your way to the lab a man approches you.\n\nAmir: thankyou sir i took you advice and did my exams i got a jon in abcde corp and now i not only work hard but i save enough to help the needy as well."<< const_name << ": Amir i did nothing it was all you. i a humble man cant even help my self how will i help you?" << "\n\nAmir: but still thankyou regardless\n\n" << const_name << ": you are most welcome.\n\n after a day spent with amir you go home.";
    n = 6;
    soul s1;
    s1.shc(10);
    house();

  }else if (n == 5){
    cout << "\n\nYou go to the lab and Amir is working doing his job and then you go home.\n\n";
    house();

  }else{
   cout << "\n\nYou work in the lab and go back home later on.\n\n";
   house();
  }
}

void thepostoffice(){
  static int n = 0;
  if(n == 0){
    cout << "\n\nYou go to the post office. You look for post office manager Mr Robert. You find Mr Robert in his office.\n\n" << const_name << ": sir please give me your stamp (a play of words please make me your student/servent.\n\nRobert: what are you talking about? me your give you my stamp? someone has fooled you brother i have nothing to give. go back to your life.\n\n";
    char choice;
    cout << "Please enter your responce. \n1) maybe i was tricked let me go home. \n2) no sir please let me be the dirt of your shoes please dont send me back.\n\n";
    do{
      choice = getch();
      cout << choice;
      timer(1);
     if(choice == '1'){
       cout << "you go home\n";
       n++;
       house();

     }else if (choice == '2'){
      cout << "Robert: you are not ready yet go back. go back. you are not ready yet. Your soil is halfbacked and impure go back you are not ready yet.\n";
      n++;
      house();
     }else{
       cout << "\n\nsorry wrong choice please eneter 1 or 2:";
     }
    }while(choice != '1' || choice != '2');

  }else if (n == 1){
    cout << "\n\nYou enter Mr Roberts office.\n\n" << const_name << ": Sir please give me your stamp.\n\nRobert: Sorry brother you are lost i can not help you go back back to your work for what is better for a sufi then hard work? what else can i give you?" << const_name << ": Sir my work isnt fully clean. in this line of work you have to give bribery sir i cannot work like this\n\nRobert: A diomands beauty can only be seen in the presence of dull objects once it has been cleaned of impurities and is polished throughly go go and live. live in this world of dirt polish your heart and soul and once they are free of impurities then come back until then the struggles of the world are the only thing i can give you.\n\nYou go back to the house.";
    timer(3);
    soul s1;
    s1.shc(10);
    n++;
    house();
    }else{
    cout << "You go to the post office you talk to the post man and then go home.";
    timer(1);
    house();
  }
}

//really cool if statements and fully functional quest loops are use too
void thebazar(){
  static int  n = 0;
  static string a = "a) Go to the shoe polisher";
  static string b = "b) Go to the fighting people";
  static string c = "c) Go to the old man";
  if(n == 0 || n == 1 || n == 2){

    static string one = "a";
    static string two = "b";
    static string three = "c";
    cout << "\n\nYour walking through the bazar on the right  you see a shoe polisher, one the left you see two people fighting and you see a old man with dirty clothes next to the shoe polisher.\n\n";
    string choice;
    do{
    cout << "What would you like to do?\n" << a <<"\n"<< b << "\n"<< c << "\nd) Go back to your house?"<<"\n\nPlease choose a option: ";
    choice = getch();
    cout << choice;
    timer(1);
    if (choice == one){
      cout << const_name << ": Hey brother i needed my shoes polised im in a hurry. could you please polish my shoes quickly?\n\nShoepolisher: Yes sir why dont you come sit here ill polish your shoes in only a few minutes.\n\nYou sit next to the shoe polisher. He begins polishing your shoes. A you notice a few people are sitting next to the shoepolisher.\n\n";
      timer(1);
      cout << "A young man is sitting on the right. The shoepoliser says to the young man. Why are you here and why did you run from home?\n\nThe young man: sir ive heard that you are the deciple of the great baba Noor Hussain.\n\n" ; 
      timer(1);
      cout << "The shoe polisher responds someone has told you wrong brother me a deciple of the great Noor Hussain? i am but his mere servant\n\nThe young man: sir if you truly are his servent then let me come and serve you\n\nThe shoe polisher asks boy do you not have parrents? to which the boy responds yes\n\n";
      timer(1);
      cout << "The shoe polisher says then go young man and serve your parrents serve your parrents for that is your hajj(pilgrimiage), for that is your prayer and a young man like you go and study hard study physics and study mathematics like the great sufies did of past. work hard and make the western winds blow in the east for we have truly forgoten hard work.\n\n You keep this lesson with you, pay the shoe polisher.";
      a = "";
  
      one = "you cant type this because you can only type one character";
      soul s1;
      s1.shc(10);
      n++;
      thebazar();
    }else if (choice == two){
      cout << "\n\nYou go to the fighting people and ask what is happning?\n\nA little child comes to you and says that a merchant is fighting Zafar Sab as Zafar Sab has stolen money from the guy or so he claims.\\n\nYou go to the fighting men\n\nYou ask the other people and most of them tell you that Zafar sab did indeed steal this man smoney but because he has strong backing Zafar sab is not giving it back";
      cout << "\n\nwhat would like to do \n1) Beat zafar sab and give the man back his money. \n2) Ask the people you know in the bazar for help for the man";

      char choice1;
      while(n != 3){
        choice1 = getch();
        if (choice1 == '1'){
          cout << "\n\nYou beat up the Zafar Sab and give the merchant his money back. You hear a voice in the distance no babu locka (way to call someone with affection) vilonce is not the way. its the last resort";
          b = "";
          two = "you cant type this because you can only type one character";
          b = "";
          two = "you cant type this because you can only type one character";
          soul s1;
          s1.shc(5);
           n++;
           thebazar();
          
        }else if(choice1 == '2'){
          cout << "\n\nPeople come together. You confront zafar sab. His family gets involved. He gives the money back to the merchant. \n\nYou remember the hilf ul fudul (The pledge of the  Virtuous.)\n\n";
          b = "";
          two = "you cant type this because you can only type one character";
          soul s1;
          s1.shc(5);
           n++;
           thebazar();

        }else{
          cout << "\n\nwrong choice please enter 1 or 2: ";

        }

      }
      
    }else if (choice == three){
    cout << "\n\nYou go to the old man. You ask him what happened? The old man replies: A stranger threw roses at this old man.\n\nWhat would you like to do? \n1) Ask the old man who did this to him.\n2) Tell the old man youll take care of the person who did this to him.";
    char choice2;
    while(n != 3){
      choice2 = getch();
      if (choice2 == '1' || choice2 == '2'){
        cout << "The old man replies: It doesn't matter son well actually it matters alot a tear comes out of the old mans eyes.\n\nThe old man says its our tridition to take care of thoese of throw dirt on us as it was the tridition of our beloved Muhammed(PBUH). let it go for today is the happiest moment in my life.";
         c = "";
        three = "you cant type this because you can only type one character";
        soul s1;
        s1.shc(10);
        n++;
        thebazar();
        
      }else{ 
        cout << "wrong choice type 1 or 2: ";
      }
    }

     
    }else if (choice == "d"){
           house();
    }else{
          cout << "\n\nwrong choice please enter "<< a << ", " << b << ", " << c << " or d " << ":";
          }
    
    }while(n != 3);
}else if(n == 3){
        cout << "\n\nYou enter the bazar. You return back to the shoe polisher you sit down right next to him.\n\nHe looks at you he says " << const_name << "what brings you here back to this shoe polisher again sarkar (sir)\n\nYou reply sir me a sarkar no i am but a humble servent. You sit for a bit longer then the shoe maker says: sir here eat eat he offer you biscuits";
        timer(2);
        cout << "\n\nwhat would you like to do \n1) Take the biscuits \n2) Dont take the biscuits.";
        char biscuits;
        do{
          biscuits = getch();
          if(biscuits == '1' || biscuits == '2'){
            
            cout << biscuits;
            cout << "\n\nSarkar sorry this is only what this man can offer. sorry sir i can not sit with you today as this man must go and clean the mosque near my teachers noor muhammeds house.";
            cout << "\n\n Upon hearing which you respond sarkar why must you do this\n\nThe shoe polisher replies: sir it was a simple mistake a bodily mistake and my teacher gave me a punishment of twelve years. now i clean the mosque for 12 years and i get the dust and dirt just for free (^_^) he simles and then goes away";
            n++;
            soul s1;
            s1.shc(10);
            house();
          }else{
            cout << "\n\nsorry wrong choice enter 1 or 2: ";
          }

        }while (biscuits != '1' || biscuits != '2');


}else{
  cout << "\n\nYou go to the bazar to find the shoe polisher but you find him not so you go back home";
  house();
}
}
//simple car running sequence using vectors and for loops
void carDrive(){
  char DriveOrStop;
  
  cout << "\nPress D to drive and Press S to stop\n";


  vector<string> gears;
  string road = "| |         | |";
  string car = "| |    H    | |";
  gears.push_back(car);
  gears.push_back(road);
  int speed = 1;
  
for(auto &i: gears)
    std::cout << i << endl;

 do{ 
  DriveOrStop = getch(); 
  if(DriveOrStop == 'd' && DriveOrStop != 's'){
    
    iter_swap(gears.begin() + getIndex(gears, car), gears.begin() + speed);
    speed++;
    gears.push_back(road);
    for(auto &i: gears)
    std::cout << i << endl;

    
  }else if (DriveOrStop == 's') {cout << "\nYou have stopped driving";
  house();
  }
 }while(DriveOrStop == 'd' && DriveOrStop != 's');

}

