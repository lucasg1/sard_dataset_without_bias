namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new twoIntsStruct[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        delete [] data;
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
        data = new twoIntsStruct[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        delete [] data;
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
        data = new twoIntsStruct[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        break;
    }
    switch(7)
    {
    case 7:
        printStructLine(&data[0]);
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
        data = new twoIntsStruct[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printStructLine(&data[0]);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
