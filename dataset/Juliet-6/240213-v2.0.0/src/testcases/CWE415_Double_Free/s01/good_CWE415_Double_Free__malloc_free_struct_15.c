void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        free(data);
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
        ; 
        break;
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        break;
    }
    switch(7)
    {
    case 7:
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
