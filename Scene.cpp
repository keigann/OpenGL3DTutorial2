/*
*@file scene.cpp
*/
#include "Scene.h"
#include <iostream>

/*
*コンストラクタ
*
*@param name シーン名
*/
Scene::Scene(const char* name) : name(name)
{
	std::cout << "Scene コンストラクタ:" << name << "\n";
}

/*
*デストラクタ
*/
Scene::~Scene()
{
	Finalize();
	std::cout << "Scene デストラクタ:" << name << "\n";
}

/*
*シーンを活動状態にする
*/

void Scene::Play()
{
	isActive = true;
	std::cout << "Scene Play デストラクタ:" << name << "\n";
}

/*
*シーンを活動状態にする
*/

void Scene::Stop()
{
	isActive = false;
	std::cout << "Scene Stop デストラクタ:" << name << "\n";
}

/*
*シーンを表示する
*/
void Scene::Show()
{
	isVisible = true;
	std::cout << "Scene Show デストラクタ:" << name << "\n";
}

/*
*シーンを非表示する
*/
void Scene::Hide()
{
	isVisible = false;
	std::cout << "Scene Hide デストラクタ:" << name << "\n";
}

/*
*シーン名を取得する
*
*@return シーン名
*/
const std::string& Scene::Name() const
{
	return name;
}

/*
*シーンの活動状態を調べる
*
*
*@retval true　活動している
*@retval false 停止している
*/
bool Scene::IsActive() const
{
	return isActive;
}

/*
*シーンの表示状態を調べる	
*
*
*@retval true　活動している
*@retval false 停止している
*/
bool Scene::IsVisible() const
{
	return isVisible;
}


