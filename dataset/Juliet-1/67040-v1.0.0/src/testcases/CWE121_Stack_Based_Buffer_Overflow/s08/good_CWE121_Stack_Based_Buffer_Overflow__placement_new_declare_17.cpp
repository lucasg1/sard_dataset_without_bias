namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    char * data;
    char VAR1[sizeof(OneIntClass)];
    char VAR2[sizeof(TwoIntsClass)];
    for(i = 0; i < 1; i++)
    {
        data = VAR1;
    }
    for(k = 0; k < 1; k++)
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
    int h,j;
    char * data;
    char VAR1[sizeof(OneIntClass)];
    char VAR2[sizeof(TwoIntsClass)];
    for(h = 0; h < 1; h++)
    {
        data = VAR2;
    }
    for(j = 0; j < 1; j++)
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
