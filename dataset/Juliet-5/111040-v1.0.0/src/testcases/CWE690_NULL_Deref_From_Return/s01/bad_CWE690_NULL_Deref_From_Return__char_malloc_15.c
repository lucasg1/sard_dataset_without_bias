void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    switch(6)
    {
    case 6:
<START>
        strcpy(data, "Initialize");
<END>
        printLine(data);
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
