## Description

請設計一個類別 Point 代表二為平面上的一個點。
Point 這個類別有兩個私有的資料成員 x 跟 y 代表平面上的一個位置，x 跟 y 是浮點數型態的。
建立一個預設建構子，將 x 跟 y 設成 0。
建立一個傳入兩個浮點數參數的建構子，依序用傳入的參數設定 x 跟 y 。
建立一個公開的函數成員 printPoint ，該函數會用 "(x, y)" 這樣的格式做輸出。
建立公開的函數成員 getX setX getY setY 用來存取資料成員 x 跟 y 。
請建立一個公開的函數成員 getDistance ，該函數有一個 Point 型態的參數，會回傳一個浮點數代表兩個點的距離。
請設計一個類別 Segment 代表平面上的一個線段。
Segment 這個類別有兩個私有的資料成員 point1 跟 point2 表示線段的兩個端點。
建立一個預設的建構子將兩個端點預設在 (0, 0) 的位置。
建立一個傳入兩個 Point 物件為參數的建構子用來設定 point1 跟 point2 。
請設計下列函數成員
float getLength(); // 沒有參數，回傳線段的長度

Please design a class Point represent a point on plane coordinates.
Give this class two private data member x and y represent the location of the point, x and y are float type.
Create a default constructor to set x and y to 0.
Create a constructor with two float parameter to set x and y.
Create a public function member printPoint to display as the format like "(x, y)"
Create public function member getX, setX, getY, setY to access the data member x and y.
Create a public function member getDistance with one Point type parameter, return a float type value represent the distance of two point.
Please design a class Segment represent a segment on plane coordinates.
Give this class two private data member point1 and point2 represent the endpoint of this segment.
Create a default constructor to set the both endpoint to (0, 0).
Create a constructor with two Point object as parameter to set two endpoint.
Implement the following function member
float getLength(); //No parameter, return the length of the segment.

## Input
NONE

## Output
NONE