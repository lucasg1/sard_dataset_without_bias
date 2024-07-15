void FUN0()
{
    switch(6)
    {
    case 6:
    {
        union
        {
            struct
            {
                char charFirst, charSecond, charThird, charFourth;
            } structChars;
            long longNumber;
        } unionStructLong;
        unionStructLong.longNumber = 0x10203040;
<START>
        unionStructLong.structChars.charFourth |= 0x80; 
<END>
        printIntLine(unionStructLong.longNumber);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
