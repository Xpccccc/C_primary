#include <stdio.h>

struct Stu{
    char name[20];
    int age;
    float score;
};

void Print(struct Stu* ps){
    printf("%s %d %f\n",ps->name,ps->age,ps->score);
}

int main(){
    struct Stu s1={"hh",22,99.9f};
    struct Stu s2={"ww",20,69.9f};
    scanf("%s %d %f",s2.name,&(s2.age),&(s2.score));
    printf("%s %d %f\n",s1.name,s1.age,s1.score);
    Print(&s2);
    return 0;
}
