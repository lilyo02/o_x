import React from 'react';
import Clock from '../chapter_04/Clock';

function WorldClock(props) {
    return (
        <div>
            <Clock zone="NewYork"/>
            <Clock zone="Seoul"/>
            <Clock zone="London"/>
        </div>
    );
}

export default WorldClock;