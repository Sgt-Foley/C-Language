#define MAX 1000
void showMenu();
struct Person
{
    string P_Name;
    int P_Sex;
    int P_Age;
    string P_Phone;
    string P_Addr;
};
struct Addressbooks
{
    Person pArray[MAX];
    int size;
};
void addPerson(Addressbooks *books);
void showPerson(const Addressbooks *books);
int isExist(const Addressbooks *books);
void deletePerson(Addressbooks *books);
void findPerson(const Addressbooks *books);
void modifyPerson(Addressbooks *books);
void cleanPerson(Addressbooks *books);