#ifndef __BLOODVIEW_H__  
#define __BLOODVIEW_H__  

#include "cocos2d.h"  
using namespace cocos2d;

class BloodView : public Node
{
public:
	BloodView();

public:
	//����Ѫ������  
	void setBackgroundTexture(const char *pName);
	//����Ѫ��ǰ��  
	void setForegroundTexture(const char *pName);
	//������Ѫ��  
	void setTotalProgress(float total);
	//���õ�ǰѪ��  
	void setCurrentProgress(float progress);
	//�õ���ǰѪ��  
	float getCurrentProgress() const;
	//�õ���Ѫ��  
	float getTotalProgress() const;

private:
	//����ǰ��Ѫ����ʾ�ĳ���  
	void setForegroundTextureRect(const Rect &rect);

private:
	Sprite *m_progressBackground;		//����Ѫ��  
	Sprite *m_progressForeground;		//ǰ��Ѫ��  
	float m_totalProgress;				//��Ѫ��  
	float m_currentProgress;			//��ǰѪ��  
	float m_scale;						//�Ŵ���  
};

#endif //__BLOODVIEW_H__ 