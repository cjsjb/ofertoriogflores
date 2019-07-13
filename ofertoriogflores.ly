% This LilyPond file was generated by Rosegarden 1.5.1
\include "nederlands.ly"
\version "2.12.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Ofertorio"
	composer = "P. Gerardo Javier Flores Cárdenas"
	tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4 \skip 1*28
	\time 2/4 \skip 2*1
	\time 4/4 \skip 1*36
	\time 2/4 \skip 2*1
	\time 4/4
}
globalTempo = {
	\tempo 4 = 70  \skip 1*13
	\tempo 4 = 72  \skip 1*10
	\tempo 4 = 74  \skip 2 \skip 1*13
	\tempo 4 = 72  \skip 2 \skip 1*22 \skip 2
	\tempo 4 = 74
}

\score {
	<<

		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "ofertoriogflores-acordes.inc"
		\new StaffGroup <<
			\include "ofertoriogflores-soprano.inc"
			\include "ofertoriogflores-mezzo.inc"
		>>
		\new StaffGroup <<
			\include "ofertoriogflores-violin.inc"
			\include "ofertoriogflores-viola.inc"
			\include "ofertoriogflores-cello.inc"
		>>

	>>

	\layout {
		\context {
			\RemoveEmptyStaffContext
		}
	}
}
