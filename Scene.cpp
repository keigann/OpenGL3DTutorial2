/*
*@file scene.cpp
*/
#include "Scene.h"
#include <iostream>

/*
*�R���X�g���N�^
*
*@param name �V�[����
*/
Scene::Scene(const char* name) : name(name)
{
	std::cout << "Scene �R���X�g���N�^:" << name << "\n";
}

/*
*�f�X�g���N�^
*/
Scene::~Scene()
{
	Finalize();
	std::cout << "Scene �f�X�g���N�^:" << name << "\n";
}

/*
*�V�[����������Ԃɂ���
*/

void Scene::Play()
{
	isActive = true;
	std::cout << "Scene Play �f�X�g���N�^:" << name << "\n";
}

/*
*�V�[����������Ԃɂ���
*/

void Scene::Stop()
{
	isActive = false;
	std::cout << "Scene Stop �f�X�g���N�^:" << name << "\n";
}

/*
*�V�[����\������
*/
void Scene::Show()
{
	isVisible = true;
	std::cout << "Scene Show �f�X�g���N�^:" << name << "\n";
}

/*
*�V�[�����\������
*/
void Scene::Hide()
{
	isVisible = false;
	std::cout << "Scene Hide �f�X�g���N�^:" << name << "\n";
}

/*
*�V�[�������擾����
*
*@return �V�[����
*/
const std::string& Scene::Name() const
{
	return name;
}

/*
*�V�[���̊�����Ԃ𒲂ׂ�
*
*
*@retval true�@�������Ă���
*@retval false ��~���Ă���
*/
bool Scene::IsActive() const
{
	return isActive;
}

/*
*�V�[���̕\����Ԃ𒲂ׂ�	
*
*
*@retval true�@�������Ă���
*@retval false ��~���Ă���
*/
bool Scene::IsVisible() const
{
	return isVisible;
}


