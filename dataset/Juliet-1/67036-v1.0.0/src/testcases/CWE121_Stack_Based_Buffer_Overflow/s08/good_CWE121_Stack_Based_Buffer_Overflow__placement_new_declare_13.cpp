namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char VAR1[sizeof(OneIntClass)];
    char VAR2[sizeof(TwoIntsClass)];
    if(GLOBAL_CONST_FIVE==5)
    {
        data = VAR1;
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            OneIntClass * classOne = new(data) OneIntClass;
            classOne->intOne = 5;
            printIntLine(classOne->intOne);
        }
    }
}
void FUN1()
{
    char * data;
    char VAR1[sizeof(OneIntClass)];
    char VAR2[sizeof(TwoIntsClass)];
    if(GLOBAL_CONST_FIVE==5)
    {
        data = VAR1;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            OneIntClass * classOne = new(data) OneIntClass;
            classOne->intOne = 5;
            printIntLine(classOne->intOne);
        }
    }
}
void FUN2()
{
    char * data;
    char VAR1[sizeof(OneIntClass)];
    char VAR2[sizeof(TwoIntsClass)];
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = VAR2;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            TwoIntsClass * classTwo = new(data) TwoIntsClass;
            classTwo->intOne = 5;
            classTwo->intTwo = 10; 
            printIntLine(classTwo->intOne);
        }
    }
}
void FUN3()
{
    char * data;
    char VAR1[sizeof(OneIntClass)];
    char VAR2[sizeof(TwoIntsClass)];
    if(GLOBAL_CONST_FIVE==5)
    {
        data = VAR2;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            TwoIntsClass * classTwo = new(data) TwoIntsClass;
            classTwo->intOne = 5;
            classTwo->intTwo = 10; 
            printIntLine(classTwo->intOne);
        }
    }
}
} 
