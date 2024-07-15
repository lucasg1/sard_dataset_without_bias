void FUN0() 
{
    char charString[10] = "false";
<START>
    if (strcmp(charString, "true") == 0) 
<END>
    {
        printLine("Never prints");
    }
}
