namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    if (VAR1 == NULL) {exit(-1);}
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR2 == NULL) {exit(-1);}
    switch(6)
    {
    case 6:
        data = VAR1;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
        free(data);
    }
    break;
    }
}
void FUN1()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    if (VAR1 == NULL) {exit(-1);}
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR2 == NULL) {exit(-1);}
    switch(6)
    {
    case 6:
        data = VAR1;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
        free(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    if (VAR1 == NULL) {exit(-1);}
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR2 == NULL) {exit(-1);}
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = VAR2;
        break;
    }
    switch(7)
    {
    case 7:
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
        free(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    if (VAR1 == NULL) {exit(-1);}
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR2 == NULL) {exit(-1);}
    switch(6)
    {
    case 6:
        data = VAR2;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
        free(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
