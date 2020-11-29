#pragma once

#include "Perg/Layer.h"

#include "Perg/Events/ApplicationEvent.h"
#include "Perg/Events/KeyEvent.h"
#include "Perg/Events/MouseEvent.h"

namespace Perg {

	class PERG_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer();

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnImGuiRender() override;

		void Begin();
		void End();

	private:
		float m_Time = 0.0f;
	};
}