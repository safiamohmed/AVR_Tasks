# MODERN C++
- What Modern C++
- Important Modern c++
- char
- Ranged For Loop
- Function


------
### What Modern C++
-  Modern C++ means the program code is written to take advantage of those later standards within the industry.


------

### Important Modern c++

- Important in the field of embedded systems
- most company needed knowledge abut c++

-------

### char


| Type     | Bits  | Encoding | String Literal | Character Literal | Raw String Literal | String Type | Stream Output |
| :------- | :---- | :------- | :------------- | :---------------- | :----------------- | :---------- | :------------ |
| char     | 8     | ASCII    | “abcd”         | ‘a’               | R”(abcd)”          | string      | cout          |
| char8_t  | 8     | UTF-8    | u8″abcd”       | u8’a’             | u8R”(abcd)”        | u8string    | cout *        |
| char16_t | 16    | UTF-16   | u”abcd”        | u’a’              | uR”(abcd)”         | u16string   | n/a           |
| char32_t | 32    | UTF-32   | U”abcd”        | U’a’              | UR”(abcd)”         | u32string   | n/a           |
| wchar_t  | 16/32 | n/a +    | L”abcd”        | L’a’              | LR”(abcd)”         | wstring     | wcout         |

ex: wchar_t

- to any char not English
- size may be 2 or 4
```c++
wchar_t x='أ';
```


-------------------------------

### Ranged For Loop

```c++
int arr[3]={1,2,3};
for(int i =0;i<n;i++){
    cout<<i<<endl;
}
as the same
 for(int i:arr){
     cout<<i<endl;
 }
```

in assembly diff between this

- the second has more instruction
- two code same work

----

### Function

- default value in c++ 

  [ T ] void fun(int x,int y=3,int z=8)

  [F ] void fun(int x,int y=3,int z)

- If you put it in the prototype, you don't need to put it in the implementation

```c++
void fun(int x,int y=3,int z=8){
    cout<<x<<y;
}
int main(){
    fun(4);//x=4 y=3
    fun(2,5);//x=2 y=5 overied y
}
```

- We can give the function the same name depending on the type of value (function overloading)

```c++
void fun(int x,int y){
    
} 
void fun(int x,float y){
    
}
int main (){
    fun(5,8);
    fun(5,5.5f);
    
}
```



- function in c 
  - can`t default in prototype 

```c
void fun(int x,int y){
    printf("x = ,y=",x,y);
}
int main(){
    fun(2,5);
}
```

