void FUN0()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
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
