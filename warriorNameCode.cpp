#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void firstName (string name);
void lastName (string name);
void AlpabetNumber (char letter, int& num);

int main()
{
    string name;
    string home;
    string warriorFirst;
    string warriorLast;
    cout << "enter your first name: ";
    cin >> name;
    cout << "enter the name of your hometown: ";
    cin >> home;

    cout << "Your Warrior name is: ";
    firstName(name);
    lastName(home);

    return 0;
}
void firstName (string name)
{
    char firstLetter;
    char lastLetter;
    string firstPart [144]= {"Bramble", "Leaf", "Squirrel", "Dust", "Sand", "Bracken", "Sorrel", "Thorn", "Bright", 
    "Spider", "Birch", "Hazel", "Mouse", "Cinder", "Honey", "Poppy", "Lion", "Holly", "Fox", "Ice", "Fern", "White", "Long", 
    "Black", "Russet", "Little", "Oak", "Rowan", "Smoke", "Ivy", "Tear", "Toad", "Owl", "Dawn",
    "Crow", "Olive", "Kink", "Rat", "Shrew", "Snake", "Scorch", "Red", "Tawny", "Snow", "Cedar", "Tall", "One",
     "Ash", "Bark", "Torn", "Kestrel", "Night", "Gorse", "Hare", "Dew", "Thistle", "Sedge",  "Willow", "Tear",
    "Swallow", "Tear", "Ant", "Ember", "Sun","Heather","Breeze","Morning","Web",
    "Leopard","Misty","Moth","Vole", "Minnow","Reed", "Moss", "Peddle", "Ripple","Mallow","Gray",
     "Dapple","Pounce","Otter", "Mint", "Pine", "Rain", "Dusk", "Copper","Tear", "Heavy",
   "Robin","Stone","Beetle", "Petal", "Grass", "Ragged", "Dove", "Tiger","Mud", "Echo",
    "Jay", "Tear", "Briar", "Rose", "Fuzzy", "Fallow", "Quail", "Stoat", "Buzzed",
    "Tear", "Tansy", "Acorn", "Snail","Bird","Tear", "Starling", "Hawk", "Mole", "Swift","Milk", "Lark",
    "Sloe", "Yellow", "Dark", "Golden", "Speckle", "Silver", "Badger", "Dead", "Fire",
    "Loud", "Tangle","Scar", "Berry", "Timber", "Mumble", "Arch","Tear", "Thrush", "Moon", "Hail",
   "Shimmer", "Lily", "Pike", "Lake"};
    string word= "";
    int len =0;
    int num1 = 0;
    int num2 = 0;
    int warriorNum = 0;
    len = name.length();
    firstLetter=name[0];
    len = len-1;
    name.erase(0,len);
    lastLetter = name[0];
    AlpabetNumber(firstLetter, num1);
    AlpabetNumber(lastLetter, num2);
    warriorNum = num1 * num2;
    warriorNum = warriorNum -1;
    word = firstPart[warriorNum];

    cout << word;
}
void lastName (string name)
{
    char firstLetter;
    char lastLetter;
    string lastPart [28] = {"Shine", "Whisker", "Tooth","Mist", "Claw", "Wing", "Tail", "Foot", "Cloud"
    "Fur", "Pelt", "Pool", "Flight", "Flower", "Talon", "Spring", "Belly",
     "Brook","Stripe", "Storm", "Frost","Feather","Light","Fang", "Leap", "Step", "Fall", "Snow"};
     string word;
    int len = 0;
    int num1=0;
    int num2=0;
    int warriorNum=0;
    len = name.length();
    firstLetter = name[0];
    len = len-1;
    name.erase(0,len);
    lastLetter = name[0];
    AlpabetNumber(firstLetter, num1);
    AlpabetNumber(lastLetter, num2);
    warriorNum=num1+num2;
    word = lastPart[warriorNum];
    cout << word << "." << endl;

}

void AlpabetNumber (char letter, int& num)
{
     using std::tolower;
        letter = tolower(letter);
    switch (letter)
    {

case 'a':
case 'e':
    num = 1;
    break;
case 'i':
case 'l':
    num = 2;
    break;
case 'n':
case 'o':
    num = 3;
    break;
case 'r':
case 's':
    num = 4;
    break;
case 't':
case 'v':
    num = 5;
    break;
case 'u':
case 'd':
    num = 6;
    break;
case 'g':
case 'b':
    num = 7;
    break;
case 'c':
case 'm':
    num = 8;
    break;
case 'p':
case 'f':
    num = 9;
    break;
case 'h':
case 'w':
    num = 10;
    break;
case 'y':
case 'k':
    num = 10;
    break;
case 'j':
case 'x':
    num = 11;
    break;
case 'q':
case 'z':
    num=12;
    break;
}
}
