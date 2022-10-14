\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"

		\key a \minor
		R1*8  |
		r8 e' 16 e' e' 8. f' 16 e' 8 f' 16 e' ~ e' e' 8.  |
%% 10
		r8 e' 16 e' e' 8. f' 16 e' 8 f' 16 e' ~ e' c' 8.  |
		r8 d' 16 d' d' 8 e' 16 d' ~ d' g 8. b 8 d'  |
		f' 8 e' 16 e' ~ e' 2. ~  |
		e' 1  |
		\key a \major
		r8 a' 16 a' a' 8. a' 16 gis' 8 e' 16 fis' ~ fis' gis' 8.  |
%% 15
		r8 fis' 16 fis' fis' 8. fis' 16 e' 8 cis' 16 d' ~ d' e' 8.  |
		d' 8 cis' b a 16 b ~ b 4 r8 b 16 cis'  |
		d' 8 cis' b a a 4 b  |
		r8 a' 16 a' a' 8. a' 16 gis' e' 8 fis' 16 ~ fis' gis' 8.  |
		r8 fis' 16 fis' fis' 8. fis' 16 e' 8 cis' 16 d' ~ d' e' 8.  |
%% 20
		d' 8 cis' b a 16 d' ~ d' 4 r8 a  |
		d' 8 cis' b a 16 d' ~ d' 8 cis' b a 16 d' ~  |
		d' 8 cis' r b 16 a d' 8 cis' 16 d' ~ d' e' 8.  |
		e' 2. r8 a'  |
		a' 4 e' b' 8. e' e' 8  |
%% 25
		d'' 8. cis'' a' 8 b' 4 r8 a'  |
		a' 4 e' b' 8. e' 16 ~ e' 4  |
		d'' 8. cis'' a' 8 b' 4 r8 a'  |
		a' 4 fis' a' 8. fis' fis' 8  |
		d'' 8. cis'' a' 8  |
%% 30
		b' 2. r8 a'  |
		a' 4 e' b' 8. e' e' 8  |
		d'' 8. cis'' a' 8 b' 4 r8 a'  |
		a' 4 e' b' 8. e' 16 ~ e' 4  |
		d'' 8. cis'' a' 8 b' 4 r8 a'  |
%% 35
		a' 4 fis' a' 8. fis' 16 ~ fis' 4  |
		d'' 8. cis'' a' 8 d'' 8. cis'' a' 8  |
		a' 2. r4  |
		\key a \minor
		R1*8  |
		r8 e' 16 e' e' 8. f' 16 e' 8 f' 16 e' ~ e' e' 8.  |
		r8 e' 16 e' e' 8. f' 16 e' 8 f' 16 e' ~ e' c' 8.  |
		r8 d' 16 d' d' 8 e' 16 d' ~ d' g 8. b 8 d'  |
		f' 8 ( e' ) e' d' 16 e' ~ e' 2 ~  |
%% 50
		e' 2 r  |
		\key a \major
		r8 a' 16 a' a' 8. a' 16 gis' 8 e' 16 fis' ~ fis' gis' 8.  |
		r8 fis' 16 fis' fis' 8. fis' 16 e' 8 cis' 16 d' ~ d' e' 8.  |
		d' 8 cis' b a 16 b ~ b 4 r8 b 16 cis'  |
		d' 8 cis' b a a 4 b  |
%% 55
		r8 a' 16 a' a' 8. a' 16 gis' e' 8 fis' 16 ~ fis' gis' 8.  |
		r8 fis' 16 fis' fis' 8. fis' 16 e' 8 cis' 16 d' ~ d' e' 8.  |
		d' 8 cis' b a 16 d' ~ d' 4 r8 a  |
		d' 8 cis' b a 16 d' ~ d' 8 cis' b a 16 d' ~  |
		d' 8 cis' r b 16 a d' 8 cis' 16 d' ~ d' e' 8.  |
%% 60
		e' 2. r8 a'  |
		a' 4 e' b' 8. e' e' 8  |
		d'' 8. cis'' a' 8 b' 4 r8 a'  |
		a' 4 e' b' 8. e' 16 ~ e' 4  |
		d'' 8. cis'' a' 8 b' 4 r8 a'  |
%% 65
		a' 4 fis' a' 8. fis' fis' 8  |
		d'' 8. cis'' a' 8  |
		b' 2. r8 a'  |
		a' 4 e' b' 8. e' e' 8  |
		d'' 8. cis'' a' 8 b' 4 r8 a'  |
%% 70
		a' 4 e' b' 8. e' 16 ~ e' 4  |
		d'' 8. cis'' a' 8 b' 4 r8 a'  |
		a' 4 fis' a' 8. fis' 16 ~ fis' 4  |
		d'' 8. cis'' a' 8 d'' 8. cis'' a' 8  |
		a' 2. r4  |
%% 75
		d'' 8. cis'' a' 8 d'' 8. cis'' a' 8  |
		a' 2. r4  |
		d'' 8. cis'' a' 8 d'' 8. cis'' a' 8  |
		a' 1  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-soprano" {
		%Vi -- "no y" pan hoy "te o" -- fre -- ce __ mos
		%en u -- nión con nues -- tras vi __ das
		%pa -- ra que tú se __ as quien trans -- for -- me nues -- tro ser. __

		Pre -- sen -- ta -- mos el es -- fuer __ zo
		del ca -- mi -- no re -- co -- rri __ do
		pa -- ra que tú guí __ es nues -- tro ca -- mi -- nar. __

		Pues la vi -- "da es" u -- na vi __ ña
		y la u -- "va es" nues -- "tro es" -- fuer __ zo,
		tó -- ma -- lo, Se -- ñor, __
		y re -- cí -- be -- "lo en" tus ma -- nos.

		Y el pan que pre -- sen -- ta __ mos
		es el fru -- to del tra -- ba __ jo de los hom -- bres que, __
		reu -- ni -- dos hoy a -- quí, __
		te ben -- de -- ci __ mos
		y can -- ta -- mos en __ "tu ho" -- nor.

		¡Ben -- di -- to se -- as, ex -- cel -- so crea -- dor!
		¡Ben -- di -- to se -- as, oh, Pa -- dre Dios!
		¡Ben -- di -- to se -- as por siem -- pre, Se -- ñor!

		¡Ben -- di -- to se -- as, ex -- cel -- so crea -- dor!
		¡Ben -- di -- to se -- as, oh, Pa -- dre Dios!
		¡Ben -- di -- to se -- as siem -- pre, por siem -- pre, Se -- ñor!

		%Nues -- tra fe, nues -- "tra es" -- pe -- ran __ za,
		%han que -- da -- do ya dis -- pues __ tas
		%en es -- tas o -- fren __ das "que hoy" po -- ne -- mos en "tu al" -- tar. __

		Que "tu a" -- mor hoy las re -- ci __ ba,
		y tus ma -- nos las trans -- for __ men
		en el cuer -- "po y" san __ gre de tu Hi __ jo, Je -- sús. __

		Pues la vi -- "da es" u -- na vi __ ña
		y la u -- "va es" nues -- "tro es" -- fuer __ zo,
		tó -- ma -- lo, Se -- ñor, __
		y re -- cí -- be -- "lo en" tus ma -- nos.

		Y el pan que pre -- sen -- ta __ mos
		es el fru -- to del tra -- ba __ jo de los hom -- bres que, __
		reu -- ni -- dos hoy a -- quí, __
		te ben -- de -- ci __ mos
		y can -- ta -- mos en __ "tu ho" -- nor.

		¡Ben -- di -- to se -- as, ex -- cel -- so crea -- dor!
		¡Ben -- di -- to se -- as, oh, Pa -- dre Dios!
		¡Ben -- di -- to se -- as por siem -- pre, Se -- ñor!

		¡Ben -- di -- to se -- as, ex -- cel -- so crea -- dor!
		¡Ben -- di -- to se -- as, oh, Pa -- dre Dios!
		¡Ben -- di -- to se -- as siem -- pre, por siem -- pre, Se -- ñor!

		¡Siem -- pre, por siem -- pre, Se -- ñor!
		¡Siem -- pre, por siem -- pre, Se -- ñor!
	}

>>
