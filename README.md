# 510k
# 程序简介

这是一个简单的山西游戏

# 程序的实现

## 程序中使用到的类

#### Card：一副扑克牌。

    接口：洗牌、摸牌及剩余牌数。
    
#### CardGroup：一组牌型

    属性：包含牌序号集合、对应牌的权值集合、该组牌的类型、权值、牌的数量；
    接口：
    
#### Player：玩家

    属性：手牌集合、手牌牌型集合、选牌集合、出牌集合、是否不出牌、玩家总分数；
    接口：分析是否出牌（或跟牌）等
    
#### Game：游戏主程序

    属性：玩家
    接口：相关控制游戏进行函数，及没个步骤通知界面更新。
    
#### Scene：游戏界面

    包含游戏界面元素及游戏主界面缓冲去生成及窗口绘制等功能。
