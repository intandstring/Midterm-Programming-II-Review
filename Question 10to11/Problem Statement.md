## Description

請設計一個類別 bar3d 代表一個長方體，該類別中要有公開的資料成員 width，height 跟 depth 分別代表寬，長跟高。
width，height 跟 depth 是 float 型態的資料成員。
請設計一個建構子給 bar3d 這類別，該建構子以三個浮點數為參數，依序用來設定 width，height 跟 depth。
width，height 跟 depth 的有效範圍是零到一千，如果有任何一個屬性不在範圍內，就將三個屬性都設成零。
請設計一個預設建構子給 bar3d 類別，該建構子沒有參數，會將 width，height 跟 depth 都設為 0。
請給 bar3d 一個函數成員 getVolume ，該函數沒有參數，會回傳一個浮點數型態的值表示體積。
請設計一個函數成員 scale ，該函數有一個 float 型態的參數，會以該參數為比例改變 bar3d 的 width ， height 跟 depth 。
請設計一個函數成員 addVolume ，該函數有一個 bar3d 型態的參數，會將兩個 bar3d 的體積加總後回傳，其回傳直為浮點數。

Please design a class bar3D represent a 3D bar, the class bar3D must include at less three public data member width, height and depth.
The width, height and depth are float type.
Please design a constructor for bar3d. The constructor hold three parameter to set width, height and depth in order.
The valid range for width, height and depth is greater than 0 and smaller than 1000.
If any one of three member are out of range, then set all of them to 0.
Please design a default constructor who setwidth, height and depth to 0.
Please design a member function getVolume, getVolume take no parameter and return an float value represent the volume of bar3d.
Please design a member function scale who take a float type parameter and scale the width, height and depth base on that.
Please design a member function addVolume who take a bar3d object as parameter and return the summation of volume of bar3ds.

## Input
NONE

## Output
NONE