namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char * VAR1 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR2 = (char *)ALLOCA(sizeof(TwoIntsClass));
    {
        char * data = *dataPtr1;
        data = VAR2;
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            TwoIntsClass * classTwo = new(data) TwoIntsClass;
            classTwo->intOne = 5;
            classTwo->intTwo = 10; 
            printIntLine(classTwo->intOne);
        }
    }
}
void FUN1()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char * VAR1 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR2 = (char *)ALLOCA(sizeof(TwoIntsClass));
    {
        char * data = *dataPtr1;
        data = VAR1;
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            OneIntClass * classOne = new(data) OneIntClass;
            classOne->intOne = 5;
            printIntLine(classOne->intOne);
        }
    }
}
} 
