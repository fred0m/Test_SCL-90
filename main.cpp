#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main ()
{
    cout<<"您好,请您根据最近一周以来自己的实际情况，选择最符合您的一项.\n其中“无”请输入1，“轻度”请输入2，“中度”请输入3，“严重”请输入4，“相当严重”请输入5.\n请正确输入数字否则程序可能会得出错误的结论或者异常终止.\n本程序得出的结果仅供参考"<<endl;
    Sleep(3000);
    cout<<"让我们现在开始吧"<<endl;
    Sleep(500);
    cout<<endl<<endl<<endl;
    int all,body,ob,so,de,an,ho,te,pa,ps,ot,mark,num = 0;//不知道这里为什么没有全部初始化。。。mmp
    all=0;//初始化
    body=0;
    ob=0;
    so=0;
    de=0;
    an=0;
    ho=0;
    te=0;
    pa=0;
    ps=0;
    ot=0;
    num=0;
    mark=0;
    //cout<<body<<endl<<ob<<endl<<so<<endl<<de<<endl<<an<<endl<<ho<<endl<<te<<endl<<pa<<endl<<ps<<endl<<ot<<endl;检查初始化是否正常。。。

    //cout<<"";
    //cin>>mark;预留模板
    //  =mark;
    //sleep(500);


    cout<<"1. 头痛"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;//阳性项目计数
    }
    else
    {
        ;
    }
    body=mark+body;
    Sleep(500);

    cout<<"2. 神经过敏，心中不踏实"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    an=mark+an;
    Sleep(500);

    cout<<"3. 头脑中有不必要的想法或字句盘旋"<<endl;
    cin>>mark;
    ob=mark+ob;
    Sleep(500);

    cout<<"4. 头晕或晕倒"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    body=mark+body;
    Sleep(500);

    cout<<"5. 对异性的兴趣减退"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    de=mark+de;
    Sleep(500);

    cout<<"6. 对旁人责备求全"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    so=mark+so;
    Sleep(500);

    cout<<"7. 感到别人能控制您的思想"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ps=mark+ps;
    Sleep(500);

    cout<<"8. 责怪别人制造麻烦"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    pa=mark+pa;
    Sleep(500);

    cout<<"9. 忘性大"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ob=mark+ob;
    Sleep(500);

    cout<<"10. 担心自己的衣饰整齐及仪态的端正"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ob=mark+ob;
    Sleep(500);

    cout<<"11. 容易烦恼和激动"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ho=mark+ho;
    Sleep(500);

    cout<<"12. 胸痛"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    body=mark+body;
    Sleep(500);

    cout<<"13. 害怕空旷的场所或街道"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    te=mark+te;
    Sleep(500);

    cout<<"14. 感到自己的精力下降，活动减慢 "<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    de=mark+de;
    Sleep(500);

    cout<<"15. 想结束自己的生命 "<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    de=mark+de;
    Sleep(500);

    cout<<"16. 听到旁人听不到的声音"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ps=mark+ps;
    Sleep(500);

    cout<<"17. 发抖 "<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    an=mark+an;
    Sleep(500);

    cout<<"18. 感到大多数人都不可信任"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    pa=mark+pa;
    Sleep(500);

    cout<<"19. 胃口不好  "<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ot=mark+ot;
    Sleep(500);

    cout<<"20. 容易哭泣"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    de=mark+de;
    Sleep(500);

    cout<<"21. 同异性相处时感到害羞不自在  "<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    so=mark+so;
    Sleep(500);

    cout<<"22. 感到受骗、中了圈套或有人想抓住您 "<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    de=mark+de;
    Sleep(500);

    cout<<"23. 无缘无故地突然感到害怕"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    an=mark+an;
    Sleep(500);

    cout<<"24. 自己不能控制地发脾气 "<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ho=mark+ho;
    Sleep(500);

    cout<<"25. 怕单独出门"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    te=mark+te;
    Sleep(500);

    cout<<"26. 经常责怪自己"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    de=mark+de;
    Sleep(500);

    cout<<"27. 腰痛"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    body=mark+body;
    Sleep(500);

    cout<<"28. 感到难以完成任务"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ob=mark+ob;
    Sleep(500);

    cout<<"29. 感到孤独"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    de=mark+de;
    Sleep(500);

    cout<<"30. 感到苦闷"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    de=mark+de;
    Sleep(500);

    cout<<"31. 过分担忧"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    de=mark+de;
    Sleep(500);

    cout<<"32. 对事物不感兴趣"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    de=mark+de;
    Sleep(500);

    cout<<"33. 感到害怕"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    an=mark+an;
    Sleep(500);

    cout<<"34. 感情容易受到伤害"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    so=mark+so;
    Sleep(500);

    cout<<"35. 旁人能知道您的私下想法"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ps=mark+ps;
    Sleep(500);

    cout<<"36. 感到别人不理解您、不同情您 "<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    so=mark+so;
    Sleep(500);

    cout<<"37. 感到人们对您不友好，不喜欢您"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    so=mark+so;
    Sleep(500);

    cout<<"38. 做事必须做得很慢以保证做得正确"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ob=mark+ob;
    Sleep(500);

    cout<<"39. 心跳得很厉害"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    an=mark+an;
    Sleep(500);

    cout<<"40. 恶心或胃部不舒服"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    body=mark+body;
    Sleep(500);

    cout<<"41. 感到比不上他人"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    so=mark+so;
    Sleep(500);

    cout<<"42. 肌肉酸痛 "<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    body=mark+body;
    Sleep(500);

    cout<<"43. 感到有人在监视您、谈论您"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    pa=mark+pa;
    Sleep(500);

    cout<<"44. 难以入睡"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ot=mark+ot;
    Sleep(500);

    cout<<"45. 做事必须反复检查"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ob=mark+ob;
    Sleep(500);

    cout<<"46. 难以作出决定"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ob=mark+ob;
    Sleep(500);

    cout<<"47. 怕乘电车、公共汽车、地铁或火车"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    te=mark+te;
    Sleep(500);

    cout<<"48. 呼吸有困难"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    body=mark+body;
    Sleep(500);

    cout<<"49. 一阵阵发冷或发热"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    body=mark+body;
    Sleep(500);

    cout<<"50. 因为感到害怕而避开某些东西、场合或活动"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    te=mark+te;
    Sleep(500);

    cout<<"51. 脑子变空了"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ob=mark+ob;
    Sleep(500);

    cout<<"52. 身体发麻或刺痛"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    body=mark+body;
    Sleep(500);

    cout<<"53. 喉咙有梗塞感"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    body=mark+body;
    Sleep(500);

    cout<<"54. 感到没有前途没有希望"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    de=mark+de;
    Sleep(500);

    cout<<"55. 不能集中注意力"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ob=mark+ob;
    Sleep(500);

    cout<<"56. 感到身体的某一部分软弱无力"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    body=mark+body;
    Sleep(500);

    cout<<"57. 感到紧张或容易紧张"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    an=mark+an;
    Sleep(500);

    cout<<"58. 感到手或脚发重 "<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    body=mark+body;
    Sleep(500);

    cout<<"59. 想到死亡"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ot=mark+ot;
    Sleep(500);

    cout<<"60. 吃得太多"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ot=mark+ot;
    Sleep(500);

    cout<<"61. 当别人看着您或谈论您时感到不自在"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    so=mark+so;
    Sleep(500);

    cout<<"62. 有一些不属于您自己的想法"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ps=mark+ps;
    Sleep(500);

    cout<<"63. 有想打人或伤害他人的冲动"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ho=mark+ho;
    Sleep(500);

    cout<<"64. 醒得太早"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ot=mark+ot;
    Sleep(500);

    cout<<"65. 必须反复洗手、点数目或触摸某些东西"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ob=mark+ob;
    Sleep(500);

    cout<<"66. 睡得不稳不深"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ot=mark+ot;
    Sleep(500);

    cout<<"67. 有想摔坏或破坏东西的冲动"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ho=mark+ho;
    Sleep(500);

    cout<<"68. 有一些别人没有的想法或念头"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    pa=mark+pa;
    Sleep(500);

    cout<<"69. 感到对别人神经过敏"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    so=mark+so;
    Sleep(500);

    cout<<"70. 在商店或电影等人多的地方感到不自在"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    te=mark+te;
    Sleep(500);

    cout<<"71. 感到任何事情都很困难"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    de=mark+de;
    Sleep(500);

    cout<<"72. 一阵阵恐惧或惊恐"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    an=mark+an;
    Sleep(500);

    cout<<"73. 感到在公共场合吃东西很不舒服"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    so=mark+so;
    Sleep(500);

    cout<<"74. 经常与人争论"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ho=mark+ho;
    Sleep(500);

    cout<<"75. 单独一人时神经很紧张"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    te=mark+te;
    Sleep(500);

    cout<<"76. 别人对您的成绩没有作出恰当的评价"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    pa=mark+pa;
    Sleep(500);

    cout<<"77. 即使和别人在一起也感到孤单"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ps=mark+ps;
    Sleep(500);

    cout<<"78. 感到坐立不安心神不定"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    an=mark+an;
    Sleep(500);

    cout<<"79. 感到自己没有什么价值"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    de=mark+de;
    Sleep(500);

    cout<<"80. 感到熟悉的东西变成陌生或不像是真的"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    an=mark+an;
    Sleep(500);

    cout<<"81. 大叫或摔东西"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ho=mark+ho;
    Sleep(500);

    cout<<"82. 害怕会在公共场合晕倒"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    te=mark+te;
    Sleep(500);

    cout<<"83. 感到别人想占您的便宜"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    pa=mark+pa;
    Sleep(500);

    cout<<"84. 为一些有关“性”的想法而很苦恼"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ps=mark+ps;
    Sleep(500);

    cout<<"85. 您认为应该因为自己的过错而受到惩罚"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ps=mark+ps;
    Sleep(500);

    cout<<"86. 感到要赶快把事情做完"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    an=mark+an;
    Sleep(500);

    cout<<"87. 感到自己的身体有严重问题"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ps=mark+ps;
    Sleep(500);

    cout<<"88. 从未感到和其他人很亲近"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ps=mark+ps;
    Sleep(500);

    cout<<"89. 感到自己有罪"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ot=mark+ot;
    Sleep(500);

    cout<<"90. 感到自己的脑子有毛病"<<endl;
    cin>>mark;
    if(mark>1)
    {
        num=num+1;
    }
    else
    {
        ;
    }
    ps=mark+ps;
    Sleep(500);

    mark=0;
    all=body+ob+so+de+an+ho+te+pa+ps+ot;

    string con ="";
    cout<<"正在统计您的数据,请稍等。\n";
    Sleep(800);
    cout<<"正在拟合结果，请稍等\n";
    Sleep(2800);
    int level = 0;
    if(all>160)
    {
        con=con+"第一检查结果阳性\n";
        level = level +1;
    }
    else
    {
        con=con+"第一检查结果阴性\n";
    }

    if(num>43)
    {
        con = con+"第二检查结果阳性\n";
        level = level +1;

    }
    else
    {
        con=con+"第二检查结果阴性\n";
    }
    cout<<con;
    Sleep(800);
    if(body>20)
    {
        cout<<"最近您可能存在心血管、胃肠道、呼吸系统、头痛、肌肉等方面的问题，如果有请就医。\n";
        level = level +1;
    }
    else
    {
        cout<<"最近您的身体方面应该没有太大问题\n";
    }

     Sleep(800);
     if(ob>17)
    {
        cout<<"您可能患有强迫症，您最近是否有明知没有必要，但又控制不住自己，反复出现为特征，主要表现在思想观念上和行为上。\n";
        level = level +1;
    }
    else
    {
        cout<<"您应该没有强迫症\n";
    }
    Sleep(800);

      if(so>17)
    {
        cout<<"您可能患有人际关系敏感，您是否有与他人交往不自在，人际交往能力低下，害怕与人交往。从而表现出自卑感，严重的导致自闭。\n";
        level = level +1;
    }
    else
    {
        cout<<"您人际关系应该比较正常\n";
    }
    Sleep(800);
      if(de>26)
    {
        cout<<"您可能有轻微抑郁，您是否对生活的兴趣减退，缺乏活动的愿望和动力，表现出悲观失望。或是以消极的心态看待问题和自己，严重的产生死亡和自杀的念头。\n";
        level = level +1;
    }
    else
    {
        cout<<"您应该不抑郁\n";
    }
    Sleep(800);
      if(an>18)
    {
        cout<<"您可能比较焦虑，您是否表现出紧张、神经过敏，严重的惊恐发作。如果是由当前的某一特定事物引起的，有明确的对象，则持续时间较短。\n";
        level = level +1;
    }
    else
    {
        cout<<"您不焦虑\n";
    }
    Sleep(800);
      if(ho>15)
    {
        cout<<"您可能有敌对心理，您是否爱争论、冲动、爆发、摔东西\n";
        level = level +1;
    }
    else
    {
        cout<<"您敌对心理较弱\n";
    }
    Sleep(800);
      if(te>17)
    {
        cout<<"您具有恐惧心理，您是否表现出内向、害怕与人交往、自卑感强。或是到空旷的地方无缘无故地感到恐怖\n";
        level = level +1;
    }
    else
    {
        cout<<"您恐惧心理较弱\n";
    }
    Sleep(800);
      if(pa>15)
    {
        cout<<"您比较偏执，您是否经常敌对、猜疑他人和进行妄想\n";
        level = level +1;
    }
    else
    {
        cout<<"您不怎么偏执\n";
    }
    Sleep(800);
      if(ps>22)
    {
        cout<<"您的精神状态比较异常\n";
        level = level +1;
    }
    else
    {
        cout<<"您精神状态比较正常\n";
    }
    Sleep(800);
      if(ot>15)
    {
        cout<<"您最近是否存在饮食或者是睡眠障碍\n";
        level = level +1;
    }
    else
    {
        cout<<"您最近饮食和随眠方面较好\n";
    }
    Sleep(800);
      if(level>9)
    {
        cout<<"您的症状非常严重\n";
    }
    else if(level>7)
    {
        cout<<"您的症状比较严重\n";
    }
    else if (level>5)
    {
        cout<<"您的症状比较明显\n";
    }
    else if(level>2)
    {
        cout<<"您的症状比较轻\n";
    }
    else if (level>-1)
    {
        cout<<"您比较正常\n";
    }
    else
    {
        cout<<"校验出错，本次检查结果存在异常，请检查您是否输入了不正确的数字，本次检查结果作废\n";
    }



   // cout<<all<<endl<<body<<endl<<ob<<endl<<so<<endl<<de<<endl<<an<<endl<<ho<<endl<<te<<endl<<pa<<endl<<ps<<endl<<ot<<endl;测试数据
    int wait = 0;
    cin>>wait;//只是为了延时防止程序直接结束



    return 0 ;
}
