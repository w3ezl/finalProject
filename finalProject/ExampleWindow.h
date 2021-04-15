/*
 * ExampleWindow.h
 *
 *  Created on: 19 окт. 2020 г.
 *      Author: unyuu
 */

#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_

#include "Window.h"

// ���������� ������ ExampleWindow ��� ������� Window
class ExampleWindow: public Window
{
public:
	static constexpr int DEFAULT_WIDTH = 1920;
	static constexpr int DEFAULT_HEIGHT = 1080;

protected:
	double _angle; // ���� �������� ������
	double _eye_level; // ������ ������ ����

public:

	// ����������� ������ ExampleWindow
	ExampleWindow(
			int width = DEFAULT_WIDTH,
			int height = DEFAULT_HEIGHT);

// ���������� ������ ExampleWindow
	virtual ~ExampleWindow() = default;

		// ����� ��������� ��������� ����
	virtual void setup() override;

	// ����� ��������� ����
	virtual void render() override;

	// ����� ��������� ������
	virtual void handle_logic() override;
};




#endif /* EXAMPLEWINDOW_H_ */
