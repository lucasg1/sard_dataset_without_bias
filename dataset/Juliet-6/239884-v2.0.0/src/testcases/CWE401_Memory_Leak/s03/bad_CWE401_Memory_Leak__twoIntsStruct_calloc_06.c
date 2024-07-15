static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
<END>
        ; 
    }
}
