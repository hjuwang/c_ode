

const 指针和数据的关系

|               | const 数据 | 非 const 数据 |
| ------------- | ---------- | ------------- |
| const 指针    | √         | √            |
| 非 const 指针 | ×         | √            |

见而言之就是：

const 指针可以指向const 的数据也能指向非const 数据

非const 指针 只能执向非const数据，不能指向 const 数据


注：
