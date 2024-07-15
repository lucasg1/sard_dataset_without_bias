namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR2;
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR1;
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN6(char * data)
{
    FUN5(data);
}
void FUN7(char * data);
void FUN8(char * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN9(char * data);
void FUN5(char * data)
{
    FUN9(data);
}
void FUN11(char * data);
void FUN7(char * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN6(char * data);
void FUN0(char * data)
{
    FUN6(data);
}
void FUN8(char * data);
void FUN2(char * data)
{
    FUN8(data);
}
} 
namespace NAMESPACE0
{
void FUN9(char * data)
{
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
        free(data);
    }
}
void FUN11(char * data)
{
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
        free(data);
    }
}
} 
