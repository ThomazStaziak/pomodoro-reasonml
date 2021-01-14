open State;

[@react.component]
let make = (~seconds, ~dispatch, ~isTicking) => 
    <div className="buttons">
      <button className="action-button" onClick={_ => dispatch(Reset)}> 
        <span className="fas fa-stop" />
      </button> 
      { isTicking ?
        <button className="action-button" onClick={_ => dispatch(Stop)}> 
            <span className="fas fa-pause" />
        </button> 
        :
        <button className="action-button" onClick={seconds == 0 ? _ => dispatch(TogglePhase) : _ => dispatch(Start)}> 
            <span className="fas fa-play" />
        </button> 
      }
    </div>
