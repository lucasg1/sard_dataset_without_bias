void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
<START>
        SNPRINTF(data,100-strlen(SRC)-1, "%s\n", SRC);
<END>
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
