#include <stdio.h>
#include <stdint.h>

// #define STR
// #define STR_PAD
#define STR_PACKET

#ifdef STR
typedef struct
{
    int roll_no;
    char *name;
    int marks;

} student;

int main(void)
{
    student s1;
    s1.roll_no = 1;
    s1.name = "Rahul";
    s1.marks = 80;

    printf("Size : %ld\n", sizeof(s1));
    printf("Roll no : %d\n", s1.roll_no);
    printf("Name : %s\n", s1.name);
    printf("Marks : %d\n", s1.marks);
    return 0;
}
#elif defined(STR_PAD)
/*Structure Padding*/
struct student
{
    char roll_no;
    int name;
    char marks;
    short f;

} __attribute__((packed));

int main(void)
{
    struct student s1;
    s1.roll_no = 1;
    s1.name = "Rahul";
    s1.marks = 80;

    printf("Size : %ld\n", sizeof(struct student));
    printf("Roll no : %d\n", s1.roll_no);
    printf("Name : %s\n", s1.name);
    printf("Marks : %d\n", s1.marks);
    return 0;
}
#elif defined(STR_PACKET)
struct Packet
{

};

int main(void)
{
    
    return 0;
}

#endif