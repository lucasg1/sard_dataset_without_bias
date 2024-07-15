void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
<END>
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
