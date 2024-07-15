namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char VAR1[sizeof(OneIntClass)];
    char VAR2[sizeof(TwoIntsClass)];
    if(globalReturnsTrueOrFalse())
    {
        data = VAR1;
    }
    else
    {
        data = VAR1;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            OneIntClass * classOne = new(data) OneIntClass;
            classOne->intOne = 5;
            printIntLine(classOne->intOne);
        }
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
    if(globalReturnsTrueOrFalse())
    {
        data = VAR2;
    }
    else
    {
        data = VAR2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            TwoIntsClass * classTwo = new(data) TwoIntsClass;
            classTwo->intOne = 5;
            classTwo->intTwo = 10; 
            printIntLine(classTwo->intOne);
        }
    }
    else
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
