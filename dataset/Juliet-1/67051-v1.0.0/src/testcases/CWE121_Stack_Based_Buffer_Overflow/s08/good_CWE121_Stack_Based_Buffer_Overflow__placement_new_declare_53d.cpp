namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3(char * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN5(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN7(char * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN9()
{
    char * data;
    char VAR3[sizeof(OneIntClass)];
    char VAR4[sizeof(TwoIntsClass)];
    data = VAR4;
    FUN5(data);
}
void FUN7(char * data);
void FUN11()
{
    char * data;
    char VAR3[sizeof(OneIntClass)];
    char VAR4[sizeof(TwoIntsClass)];
    data = VAR3;
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
    }
}
void FUN2(char * data)
{
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
    }
}
} 
