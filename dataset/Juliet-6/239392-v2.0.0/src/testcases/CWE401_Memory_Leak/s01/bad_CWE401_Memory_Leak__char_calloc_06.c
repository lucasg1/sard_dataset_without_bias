static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
<END>
        ; 
    }
}
