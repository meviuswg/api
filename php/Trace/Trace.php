<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: github.com/TheThingsNetwork/api/trace/trace.proto

namespace Trace;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * <pre>
 * Trace information
 * </pre>
 *
 * Protobuf type <code>trace.Trace</code>
 */
class Trace extends \Google\Protobuf\Internal\Message
{
    /**
     * <pre>
     * Generated ID
     * </pre>
     *
     * <code>string id = 1;</code>
     */
    private $id = '';
    /**
     * <pre>
     * Time in Unix nanoseconds
     * </pre>
     *
     * <code>int64 time = 2;</code>
     */
    private $time = 0;
    /**
     * <pre>
     * The ID of the component
     * </pre>
     *
     * <code>string service_id = 3;</code>
     */
    private $service_id = '';
    /**
     * <pre>
     * The name of the component (router/broker/handler)
     * </pre>
     *
     * <code>string service_name = 4;</code>
     */
    private $service_name = '';
    /**
     * <pre>
     * Short event name
     * </pre>
     *
     * <code>string event = 5;</code>
     */
    private $event = '';
    /**
     * <pre>
     * metadata for the event
     * </pre>
     *
     * <code>map&lt;string, string&gt; metadata = 6;</code>
     */
    private $metadata;
    /**
     * <pre>
     * Parents of the event
     * </pre>
     *
     * <code>repeated .trace.Trace parents = 11;</code>
     */
    private $parents;

    public function __construct() {
        \GPBMetadata\GithubCom\TheThingsNetwork\Api\Trace\Trace::initOnce();
        parent::__construct();
    }

    /**
     * <pre>
     * Generated ID
     * </pre>
     *
     * <code>string id = 1;</code>
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * <pre>
     * Generated ID
     * </pre>
     *
     * <code>string id = 1;</code>
     */
    public function setId($var)
    {
        GPBUtil::checkString($var, True);
        $this->id = $var;
    }

    /**
     * <pre>
     * Time in Unix nanoseconds
     * </pre>
     *
     * <code>int64 time = 2;</code>
     */
    public function getTime()
    {
        return $this->time;
    }

    /**
     * <pre>
     * Time in Unix nanoseconds
     * </pre>
     *
     * <code>int64 time = 2;</code>
     */
    public function setTime($var)
    {
        GPBUtil::checkInt64($var);
        $this->time = $var;
    }

    /**
     * <pre>
     * The ID of the component
     * </pre>
     *
     * <code>string service_id = 3;</code>
     */
    public function getServiceId()
    {
        return $this->service_id;
    }

    /**
     * <pre>
     * The ID of the component
     * </pre>
     *
     * <code>string service_id = 3;</code>
     */
    public function setServiceId($var)
    {
        GPBUtil::checkString($var, True);
        $this->service_id = $var;
    }

    /**
     * <pre>
     * The name of the component (router/broker/handler)
     * </pre>
     *
     * <code>string service_name = 4;</code>
     */
    public function getServiceName()
    {
        return $this->service_name;
    }

    /**
     * <pre>
     * The name of the component (router/broker/handler)
     * </pre>
     *
     * <code>string service_name = 4;</code>
     */
    public function setServiceName($var)
    {
        GPBUtil::checkString($var, True);
        $this->service_name = $var;
    }

    /**
     * <pre>
     * Short event name
     * </pre>
     *
     * <code>string event = 5;</code>
     */
    public function getEvent()
    {
        return $this->event;
    }

    /**
     * <pre>
     * Short event name
     * </pre>
     *
     * <code>string event = 5;</code>
     */
    public function setEvent($var)
    {
        GPBUtil::checkString($var, True);
        $this->event = $var;
    }

    /**
     * <pre>
     * metadata for the event
     * </pre>
     *
     * <code>map&lt;string, string&gt; metadata = 6;</code>
     */
    public function getMetadata()
    {
        return $this->metadata;
    }

    /**
     * <pre>
     * metadata for the event
     * </pre>
     *
     * <code>map&lt;string, string&gt; metadata = 6;</code>
     */
    public function setMetadata(&$var)
    {
        $arr = GPBUtil::checkMapField($var, \Google\Protobuf\Internal\GPBType::STRING, \Google\Protobuf\Internal\GPBType::STRING);
        $this->metadata = $arr;
    }

    /**
     * <pre>
     * Parents of the event
     * </pre>
     *
     * <code>repeated .trace.Trace parents = 11;</code>
     */
    public function getParents()
    {
        return $this->parents;
    }

    /**
     * <pre>
     * Parents of the event
     * </pre>
     *
     * <code>repeated .trace.Trace parents = 11;</code>
     */
    public function setParents(&$var)
    {
        $arr = GPBUtil::checkRepeatedField($var, \Google\Protobuf\Internal\GPBType::MESSAGE, \Trace\Trace::class);
        $this->parents = $arr;
    }

}
