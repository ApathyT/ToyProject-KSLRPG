#ifndef __BLOODVIEW_H__  
#define __BLOODVIEW_H__  

#include "cocos2d.h"  
using namespace cocos2d;

class BloodView : public Node
{
public:
	BloodView();

public:
	//设置血条背景  
	void setBackgroundTexture(const char *pName);
	//设置血条前景  
	void setForegroundTexture(const char *pName);
	//设置总血量  
	void setTotalProgress(float total);
	//设置当前血量  
	void setCurrentProgress(float progress);
	//得到当前血量  
	float getCurrentProgress() const;
	//得到总血量  
	float getTotalProgress() const;

private:
	//设置前景血条显示的长度  
	void setForegroundTextureRect(const Rect &rect);

private:
	Sprite *m_progressBackground;		//背景血条  
	Sprite *m_progressForeground;		//前景血条  
	float m_totalProgress;				//总血量  
	float m_currentProgress;			//当前血量  
	float m_scale;						//放大倍数  
};

#endif //__BLOODVIEW_H__ 