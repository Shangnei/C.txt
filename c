#include 包含   #ifndef   #define(只是单纯的替换)       所有带#的都属于预编译范畴
基本数据类型 short int long float double char   构造类型 数组  struct union enun  指针   空类型 void
变量 定义
        【存储类型】 数据类型 标识符=值    type name=value（【】可以省略的）
         标识符，见名知意
         数据类型： 基本型+构造型
         存储类型：  
                  auto（默认：自动分配自动释放）      
                  static（静态型，会自动初始化初值为零，并且变量的值具有继承性，使用同一块空间，函数在单文件用）
                  register（建议型：寄存器类型，只能定义局部变量，不能定义全局，大小当前是几位机器，就是几位，没有地址）    
                  extern（说明型，不能改变被说明的变量和值）      
          生命周期和作用范围
            全局变量用于整个程序，局部变量直到程序块执行结束，内部的作用范围屏蔽外部的
 运算符
        算数                   + - * / % ++ -- 
        关系                   < > <= >= != 
        逻辑                   && || ！（具有短路性）
        位                     << >> ~:(取反，每一位) |:(按位或) ^(按位异或:相同为零不同为一 ) &(按位与)   某一位置一 num=num|1<<n  某一位清零 num=num & ~(1<<n)
        赋值                   =
        条件                   ？：
        逗号                   ，（表达式的值就是最后一个的值）
        指针                   * & 
        求字节                 sizeof
        强制类型转换          （类型）
        分量                   ->
        下标                   []
        其他                  （）
三 输入 输出
        1，格式化输入输出      scanf   printf
                int printf(const char *format , ....)
                        format: "%[修饰符]格式字符"
                        变参函数，自己都不知道有几个参数
                        \n刷新缓冲区
                int scanf(const char *format , ....)
                        不能加\n scanf要原样输入
                        输入输出类型要匹配
                        不能用间隔符
                        %s极度容易越界
                        放在循环中很危险，需要校验scanf的返回值 
                        scnaf("%*c%c",&ch) *抑制符吃掉一个ch值
        2，字符输入输出        getchar  putchar
                  int getchar(void)
                  int putchar(int c)
        3，字符串输入输出      gets     puts  最好不要用
                修饰符                    功能
                m                       输出数据域宽，数据长度<m,左补空格，否则按实际输出
               .n                       对实数，指定小数点后位数（四舍五入），对字符串指定实际输出位数
                -                       输出数据在域内左对齐（缺省右对齐）
                +                       指定在有符号的正数前显示+
                0                       输出数值时指定左面不使用的空位置自动填充0
                #                       在八进制和十六进制显示前导0 0x
                l                       在d,o,x,u前，指定精度为long型 在e,f,g指定输出精度为double型
                
                          标准输出格式字符
                 d,i            十进制整数
                 x,X            十六进制无符号整数
                 o              八进制无符号整数
                 u              不带符号十进制整数
                 c              单一字符
                 s              字符串
                 c,E            指数形式浮点小数
                 f              小数形式浮点小数
                 g              e和f中较短的一种 
                 %%             百分号本身
 
 
 流程控制
        顺序，选择，循环
        关键字
        选择           
                if-else    else 与他最近的if匹配   ，当他多条语句时要加{}语句框
                switch(exp)
                {
                      case  常量表达式：
                        break;
                      case  常量表达式：
                        break;
                      ......
                      default:(当所有分支都不成功时走他)
                }  
                
                
                循环   while(exp) (最少为0次)
                                           while(exp)  
                                           {
                                              loop
                                           }
                           
                      do-while(exp) (最少执行1次)

                                      do
                                      {
                                        loop
                                      }while （exp）
                      
                      
                      for   (最小循环0次)
                                        for(exp1;exp2;exp3)
                                                loop;
                      
                      if go-to
        辅助循环       continue       break
                 
