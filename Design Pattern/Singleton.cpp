
   #include <iostream>
    #include <string>
    
    using namespace std;
    
    class GameSetting
    {
        static GameSetting * _instance;                 //static member  
        
        int _brightness;
        int _width;
        int _height;
        
        GameSetting()
        { 
            _width=78, _height=1300, _brightness=100;
        }
        
        public:
        
        static GameSetting * getinstance()              //static function
        {
            if(_instance == NULL)
            {
                _instance = new GameSetting();
            }
            return _instance;
        }
        
        void setwidth(int width)
        {
            _width=width;
        }
        
        void setheight(int height)
        {
            _height=height;
        }
        
        void setbrightness(int brightness)
        {
            _brightness=brightness;
        }
        int getwidth()
        {
            return _width;
        }
        int getheight()
        {
            return _height;
        }
        int getbrightness()
        {
            return _brightness;
        }
        
        void display()
        {
            cout<<"Brightness is "<<_brightness<<endl;
            cout<<"Height is "<<_height<<endl;
            cout<<"Width is "<<_width<<endl;
            
        }
    };
    
    GameSetting * GameSetting::_instance= NULL;         //creating _instance
    
    void fun()
    {
         GameSetting *settings = GameSetting::getinstance();
        settings->display();
    }
    
    int main()
    {
        GameSetting *settings = GameSetting::getinstance();
        settings->display();
        cout<<endl;
        settings->setbrightness(200);
        fun();
        return 0;
    }